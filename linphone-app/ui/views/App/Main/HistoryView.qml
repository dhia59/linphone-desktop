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
    property int  numPadButtonWidth:120
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
            rowSpacing: 5
            columnSpacing: 5
            Layout.alignment: Qt.AlignHCenter

            Button {

                                text: "1"
                                id:numpadOneId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging
                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3

                                    color: numpadOneId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadOneId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                    // State for hover effect


                                    // Transition for smooth effect
                                    transitions: Transition {
                                        NumberAnimation { properties: "border.color"; duration: 200 }
                                    }

                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadOneId.hovered = true
                                    onExited: numpadOneId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "1"}
                                }
                            }
            Button {

                                text: "2"
                                id:numpadTwoId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {

                                    property int commonBorderWidth : 1
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadTwoId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadTwoId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }
                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadTwoId.hovered = true
                                    onExited: numpadTwoId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "2"}
                                }
                            }
            Button {

                                text: "3"
                                id:numpadThreeId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadThreeId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadThreeId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadThreeId.hovered = true
                                    onExited: numpadThreeId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "3"}
                                }
                            }
            ///////////////////////////////////////////////////////////////////////////

            Button {

                                text: "4"
                                id:numpadFourId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadFourId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadFourId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadFourId.hovered = true
                                    onExited: numpadFourId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "4"}
                                }
                            }
            Button {

                                text: "5"
                                id:numpadFiveId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadFiveId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadFiveId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadFiveId.hovered = true
                                    onExited: numpadFiveId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "5"}
                                }
                            }
            Button {

                                text: "6"
                                id:numpadSixId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadSixId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadSixId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadSixId.hovered = true
                                    onExited: numpadSixId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "6"}
                                }
                            }
            ///////////////////////////////////////////////////////////////////////////

            Button {

                                text: "7"
                                id:numpadSevenId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadSevenId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadSevenId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadSevenId.hovered = true
                                    onExited: numpadSevenId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "7"}
                                }
                            }
            Button {

                                text: "8"
                                id:numpadEightId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadEightId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadEightId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadEightId.hovered = true
                                    onExited: numpadEightId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "8"}
                                }
                            }
            Button {

                                text: "9"
                                id:numpadNineId
                                font.pixelSize: 20
                                width: numPadButtonWidth
                                height: numPadButtonheight
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadNineId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadNineId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadNineId.hovered = true
                                    onExited: numpadNineId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "9"}
                                }
                            }
            ///////////////////////////////////////////////////////////////////////////
            Button {

                                text: "*"
                                id:numpadstartId
                                font.pixelSize: 20
                                anchors.margins: numPadButtonmarging
                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadstartId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadstartId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadstartId.hovered = true
                                    onExited: numpadstartId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "*"}
                                }
                            }
            Button {

                                text: "0"
                                id:numpadzeroId
                                font.pixelSize: 20
                                anchors.margins: numPadButtonmarging
                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadzeroId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadzeroId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadzeroId.hovered = true
                                    onExited: numpadzeroId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "0"}
                                }
                            }
            Button {

                                text: "#"
                                id:numpadhashId
                                anchors.margins: numPadButtonmarging
                                font.pixelSize: 20
                                width: 60
                                height: 40

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadhashId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadhashId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadhashId.hovered = true
                                    onExited: numpadhashId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "#"}
                                }
                            }
            ///////////////////////////////////////////////////////////////////////////
            Button {

                                text: "+"
                                id:numpadplusId
                                font.pixelSize: 20
                                anchors.margins: numPadButtonmarging
                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    color: numpadplusId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.color: numpadplusId.hovered ? "#e5e5e5" : "#f9f9f9"
                                    border.width: 1
                                    radius: 5
                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadplusId.hovered = true
                                    onExited: numpadplusId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text += "+"}
                                }
                            }
            Button {

                                text: "\uf095"
                                id:numpadcallId
                                font.pointSize: 14
                                 palette.buttonText: "#20E8E4"
                                font.family: fontAwesome.name
                                font.pixelSize: 20
                                anchors.margins: 10
                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    border.width: 1
                                    color: numpadcallId.hovered ? "#222ca1" : "#141B6C"
                                    border.color: numpadcallId.hovered ? "#222ca1" : "#141B6C"
                                    radius: 5

                                }

                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadcallId.hovered = true
                                    onExited: numpadcallId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {console.log("Calling number: " + "<sip:"+displayText.text+"@cprx1p1>");CallsListModel.launchAudioCall( "<sip:"+displayText.text+"@cprx1p1>",'' )}
                                }

                            }

            Button {

                                text: "\uf55a"
                                id:numpadremoveId
                                font.pixelSize: 20
                                palette.buttonText: "#20E8E4"
                               font.family: fontAwesome.name
                                anchors.margins: numPadButtonmarging

                                background: Rectangle {
                                    implicitWidth: numPadButtonWidth
                                    implicitHeight: numPadButtonheight
                                    opacity: enabled ? 1 : 0.3
                                    border.width: 1
                                    color: numpadremoveId.hovered ? "#222ca1" : "#141B6C"
                                    border.color: numpadremoveId.hovered ? "#222ca1" : "#141B6C"
                                    anchors.margins: 10
                                    radius: 5
                                }
                                MouseArea {
                                    anchors.fill: parent
                                    onEntered: numpadremoveId.hovered = true
                                    onExited: numpadremoveId.hovered = false
                                    cursorShape: Qt.PointingHandCursor
                                    onClicked: {displayText.text = displayText.text.slice(0, -1)}
                                }

                            }
        }


    }


}
	
}
    }
