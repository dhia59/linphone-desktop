import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.7
import Common 1.0
import Linphone 1.0
import UtilsCpp 1.0

import App.Styles 1.0

import 'HistoryView.js' as Logic

// =============================================================================

ColumnLayout  {
	id: historyView
	
	property var entry
	property string peerAddress : entry ? entry.sipAddress : ''
	property string fullPeerAddress : entry ? entry.sipAddress : ''
    property int  numPadButtonWidth:100
    property int  numPadButtonheight:60
    property int  numPadButtonmarging:5
	
	
	property var _sipAddressObserver: peerAddress?SipAddressesModel.getSipAddressObserver((fullPeerAddress?fullPeerAddress:peerAddress), ''):null
	
	onEntryChanged: historyProxyModel.resetMessageCount()
	// ---------------------------------------------------------------------------


    FontLoader {
         id: fontAwesome
         source: "qrc:/assets/fonts/fontawesome-desktop.otf"
         onStatusChanged: {
             if (status === FontLoader.Error) {
                 console.error("Failed to load FontAwesome font: " + source);
                 errorText.visible = true;
             } else if (status === FontLoader.Ready) {
                 console.log("FontAwesome font loaded successfully");
                 console.log("Font name: " + fontAwesome.name);
             } else if (status === FontLoader.Loading) {
                 console.log("FontAwesome font is loading...");
             }
         }
     }
	spacing: 0
	Component.onDestruction: _sipAddressObserver=null// Need to set it to null because of not calling destructor if not.
	// ---------------------------------------------------------------------------
	// Contact bar.
	// ---------------------------------------------------------------------------
	
	Rectangle {
		Layout.fillWidth: true
		Layout.preferredHeight: peerAddress?HistoryViewStyle.bar.height:HistoryViewStyle.bar.height/2
		
        color: "transparent"
		
		RowLayout {
			anchors {
				fill: parent
				leftMargin: HistoryViewStyle.bar.leftMargin
				rightMargin: HistoryViewStyle.bar.rightMargin
			}
			spacing: HistoryViewStyle.bar.spacing
			
			layoutDirection: peerAddress?Qt.LeftToRight :Qt.RightToLeft 
			
			Avatar {
				id: avatar
				
				Layout.preferredHeight: HistoryViewStyle.bar.avatarSize
				Layout.preferredWidth: HistoryViewStyle.bar.avatarSize
				
				image: peerAddress && historyView._sipAddressObserver && historyView._sipAddressObserver.contact? historyView._sipAddressObserver.contact.avatar : null
				
				presenceLevel: historyView._sipAddressObserver?Presence.getPresenceLevel(
																	historyView._sipAddressObserver.presenceStatus
																	):null
				presenceTimestamp: historyView._sipAddressObserver && historyView._sipAddressObserver.contact ? historyView._sipAddressObserver.contact.presenceTimestamp :null
				
				username: historyView.entry && historyView.entry.wasConference
							? historyView.entry.title
							: peerAddress && historyView._sipAddressObserver
								? UtilsCpp.getDisplayName(historyView._sipAddressObserver.peerAddress)
								: null
				visible: peerAddress
				isOneToOne: !historyView.entry || !historyView.entry.wasConference
			}
			
			ContactDescription {
				Layout.fillHeight: true
				Layout.fillWidth: true
				
				subtitleText: historyView.entry && historyView.entry.wasConference
								? ''
								: UtilsCpp.toDisplayString(SipAddressesModel.cleanSipAddress(historyView.peerAddress), SettingsModel.sipDisplayMode)
				subtitleColor: HistoryViewStyle.bar.description.subtitleColor.color
				titleText: avatar.username
				titleColor: HistoryViewStyle.bar.description.titleColor.color
				visible:peerAddress
			}
			
			Row {
				Layout.fillHeight: true
				
				spacing: HistoryViewStyle.bar.actions.spacing
				ActionBar {
					anchors.verticalCenter: parent.verticalCenter
					iconSize: HistoryViewStyle.bar.actions.call.iconSize
					visible: historyView.entry || false
					
					ActionButton {
						isCustom: true
						backgroundRadius: 90
						colorSet: HistoryViewStyle.videoCall
						visible: peerAddress && SettingsModel.videoAvailable && SettingsModel.outgoingCallsEnabled && SettingsModel.showStartVideoCallButton
						
						onClicked: CallsListModel.launchVideoCall(historyView.peerAddress)
					}
					
					ActionButton {
						isCustom: true
						backgroundRadius: 90
						colorSet: HistoryViewStyle.call
						visible: peerAddress && SettingsModel.outgoingCallsEnabled
						
						onClicked: CallsListModel.launchAudioCall(historyView.peerAddress)
					}
					ActionButton {
						isCustom: true
						backgroundRadius: 90
						colorSet: HistoryViewStyle.chat
						
						visible: peerAddress && SettingsModel.standardChatEnabled && SettingsModel.getShowStartChatButton() && !historyView.entry.wasConference
						
						onClicked: CallsListModel.launchChat(historyView.peerAddress, 0)
					}
					ActionButton {
						isCustom: true
						backgroundRadius: 1000
						colorSet: HistoryViewStyle.chat
						visible: peerAddress && SettingsModel.secureChatEnabled && SettingsModel.getShowStartChatButton() && !historyView.entry.wasConference
						onClicked: CallsListModel.launchChat(historyView.peerAddress, 1)
						Icon{
							icon:'secure_level_1'
							iconSize: parent.height/2
							anchors.top:parent.top
							anchors.horizontalCenter: parent.right
						}
					}
				}
				
				ActionBar {
					anchors.verticalCenter: parent.verticalCenter
					
					ActionButton {
						isCustom: true
						backgroundRadius: 4
						colorSet: historyView._sipAddressObserver && historyView._sipAddressObserver.contact ? ConversationStyle.bar.actions.edit.viewContact : ConversationStyle.bar.actions.edit.addContact
						iconSize: HistoryViewStyle.bar.actions.edit.iconSize
						visible: SettingsModel.contactsEnabled && historyView.entry ? !historyView.entry.wasConference : false
						
						onClicked: window.setView('ContactEdit', { sipAddress: historyView.peerAddress })
						tooltipText: peerAddress?Logic.getEditTooltipText():''
					}
					
					ActionButton {
						isCustom: true
						backgroundRadius: 90
						colorSet: HistoryViewStyle.deleteAction
						
						onClicked: Logic.removeAllEntries()
						
						tooltipText: qsTr('cleanHistory')
					}
				}
			}
		}
	}
	
	// ---------------------------------------------------------------------------
	// History.
	// ---------------------------------------------------------------------------

    Rectangle{
        Layout.fillWidth: true
        Layout.fillHeight: true
	History {
        id:historyId
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width:400

		
		onEntryClicked:{
			historyView.entry = entry
		}
		
		proxyModel: HistoryProxyModel {
			id: historyProxyModel
			
			Component.onCompleted: {
				setEntryTypeFilter()
				resetMessageCount()
			}
		}
	}


    Rectangle{
     id:contactEditId
    //Layout.fillHeight: true
    //Layout.fillWidth: true
    anchors.left: historyId.right
    anchors.right: parent.right
    anchors.top: parent.top
    anchors.bottom: parent.bottom
    radius: 10
    anchors.margins: 10
    color: "transparent"


    ColumnLayout {
        anchors.centerIn: parent
        spacing: 10

        TextField {
            id: displayText
            placeholderText: qsTr("Enter un numéro")
            text: ""
            font.pixelSize: 18
            leftPadding: 40
            bottomPadding: 5
            font.letterSpacing: 3
            color: "#000000"
            //horizontalAlignment: Text.AlignHCenter
            Layout.alignment: Qt.AlignHCenter
            Layout.fillWidth: true
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                border.color: displayText.focus || displayText.text.length > 0 ? "#20E8E4" : "#141B6C"
                border.width: 1
                color: "transparent"

                Text {
                    text: " \uf58e"
                    font.pointSize: 14
                    font.family: fontAwesome.name
                    color: "#141B6C"
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

            }
        }

        GridLayout {
            columns: 3
            rowSpacing: 10
            columnSpacing: 5
            Layout.alignment: Qt.AlignHCenter

            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadOneImage
                    source: "qrc:/assets/images/clavierdappel_1.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect
                    /*Rectangle {
                        anchors.fill: parent
                        color: numpadOneImage.MouseArea.containsMouse ? "#e5e5e5" : "#f9f9f9"
                        border.color: numpadOneImage.MouseArea.containsMouse ? "#e5e5e5" : "#f9f9f9"
                        border.width: 1
                        radius: 5
                        opacity: 0.5  // Adjust as needed for hover background opacity
                    }*/

                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        id: mouseArea
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "1";
                        }

                        onEntered: numpadOneImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadOneImage.opacity = 1.0
                    }
                }
            }

            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadTwoImage
                    source: "qrc:/assets/images/clavierdappel_2.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "2";
                        }

                        onEntered: numpadTwoImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadTwoImage.opacity = 1.0
                    }
                }
            }

            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadThreeImage
                    source: "qrc:/assets/images/clavierdappel_3.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "3";
                        }

                        onEntered: numpadThreeImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadThreeImage.opacity = 1.0
                    }
                }
            }
            ///////////////////////////////////////////////////////////////////////////

            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadFourImage
                    source: "qrc:/assets/images/clavierdappel_4.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "4";
                        }

                        onEntered: numpadFourImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadFourImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadFiveImage
                    source: "qrc:/assets/images/clavierdappel_5.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "5";
                        }

                        onEntered: numpadFiveImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadFiveImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadSixImage
                    source: "qrc:/assets/images/clavierdappel_6.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "6";
                        }

                        onEntered: numpadSixImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadSixImage.opacity = 1.0
                    }
                }
            }
            ///////////////////////////////////////////////////////////////////////////

            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadSevenImage
                    source: "qrc:/assets/images/clavierdappel_7.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "7";
                        }

                        onEntered: numpadSevenImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadSevenImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadEightImage
                    source: "qrc:/assets/images/clavierdappel_8.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "8";
                        }

                        onEntered: numpadEightImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadEightImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadNineImage
                    source: "qrc:/assets/images/clavierdappel_9.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "9";
                        }

                        onEntered: numpadNineImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadNineImage.opacity = 1.0
                    }
                }
            }
            ///////////////////////////////////////////////////////////////////////////
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadAsteriskImage
                    source: "qrc:/assets/images/clavierdappel_0.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "*";
                        }

                        onEntered: numpadAsteriskImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadAsteriskImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpadZeroImage
                    source: "qrc:/assets/images/clavierdappel_0.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "0";
                        }

                        onEntered: numpadZeroImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadZeroImage.opacity = 1.0
                    }
                }
            }
            Rectangle {
                width: numPadButtonWidth
                height: numPadButtonheight
                Image {
                    id: numpaddiasImage
                    source: "qrc:/assets/images/clavierdappel_0.png"  // Replace with your image path
                    width: numPadButtonWidth
                    height: numPadButtonheight
                    anchors.margins: numPadButtonmarging
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "#";
                        }

                        onEntered: numpaddiasImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpaddiasImage.opacity = 1.0
                    }
                }
            }


            ///////////////////////////////////////////////////////////////////////////

            RowLayout{
                width: 50
                height: 50
            Rectangle {
                Layout.leftMargin: 50
                //anchors.centerIn: parent
                Image {
                    id: numpadPlusImage
                    source: "qrc:/assets/images/clavierdappel_plus.png"
                    width: 40
                    height: 40
                    anchors.centerIn: parent
                    anchors.rightMargin: 30
                    fillMode: Image.PreserveAspectFit
                    smooth: true
                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
                            // Implement your click logic here
                            displayText.text += "+";
                        }

                        onEntered: numpadPlusImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadPlusImage.opacity = 1.0
                    }
                }
            }
        }

            RowLayout{
                width: 50
                height: 50
            Rectangle {
                Layout.leftMargin: 50
                Image {
                    id: numpadCallImage
                    source: "qrc:/assets/images/clavierdappel_call.png"  // Replace with your image path
                    width: 40
                    height: 40
                    anchors.centerIn: parent
                    anchors.rightMargin: 30
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {console.log("Calling number: " + "<sip:"+displayText.text+"@cprx1p1>");CallsListModel.launchAudioCall( "<sip:"+displayText.text+"@cprx1p1>",'' )}


                        onEntered: numpadCallImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadCallImage.opacity = 1.0
                    }
                }
            }
        }
            RowLayout{
                width: 50
                height: 50
            Rectangle {
                Layout.leftMargin: 45
                Image {
                    id: numpadDellImage
                    source: "qrc:/assets/images/clavierdappel_del.png"  // Replace with your image path
                    width: 50
                    height: 50
                    anchors.centerIn: parent
                    anchors.rightMargin: 30
                    fillMode: Image.PreserveAspectFit
                    smooth: true

                    // Background rectangle for hover effect


                    // MouseArea to handle clicks and hover state
                    MouseArea {
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor
                        onClicked: {displayText.text = displayText.text.slice(0, -1)}
                        onEntered: numpadDellImage.opacity = 0.8  // Adjust opacity or any effect on hover
                        onExited: numpadDellImage.opacity = 1.0
                    }
                }
            }
            }

        }


    }


}
	
}
    }
