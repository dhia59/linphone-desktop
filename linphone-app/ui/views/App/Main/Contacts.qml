import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2

import Common 1.0
import Linphone 1.0
import Utils 1.0
import UtilsCpp 1.0
import LinphoneEnums 1.0

import App.Styles 1.0

// =============================================================================

ColumnLayout {
    property bool isBusy: true

    function _removeContact (contact) {
        window.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
                                       descriptionText: qsTr('removeContactDescription'),
                                   }, function (status) {
                                       if (status) {
                                           ContactsListModel.remove(contact)
                                       }
                                   })
    }

    spacing: 0

    // ---------------------------------------------------------------------------
    // Search Bar & actions.
    // ---------------------------------------------------------------------------

    Rectangle {
        id:searchBarId
        Layout.fillWidth: true
        Layout.preferredHeight: ContactsStyle.bar.height

        color: ContactsStyle.bar.backgroundColor.color

        RowLayout {
            anchors {
                fill: parent
                leftMargin: ContactsStyle.bar.leftMargin
                rightMargin: ContactsStyle.bar.rightMargin
            }
            spacing: ContactsStyle.spacing

            TextField {
                Layout.fillWidth: true
                icon: ContactsStyle.filter.icon
                overwriteColor: ContactsStyle.filter.colorModel.color
                placeholderText: qsTr('recherche contact')

                onTextChanged: contacts.setFilter(text)
            }

            ExclusiveButtons {
                texts: [
                    qsTr('Tous'),
                    qsTr('Collaborateurs'),
                    qsTr('Partagés'),
                    qsTr('Personnels')
                ]

                onClicked:{

                    if(button===0){
                        contacts.usePartageFilter= false;
                        contacts.useLocalFilter= false;
                        contacts.usePersonnelFilter= false;
                    }
                    else if(button===1){
                        contacts.usePartageFilter= false;
                        contacts.useLocalFilter= true;
                        contacts.usePersonnelFilter= false;
                    }
                    else if(button===2){
                        contacts.usePartageFilter= true;
                        contacts.useLocalFilter= false;
                        contacts.usePersonnelFilter= false;
                    }
                    else if(button===3){
                        contacts.usePartageFilter= false;
                        contacts.useLocalFilter= false;
                        contacts.usePersonnelFilter= true;
                    }

                }
            }

            TextButtonB {
                addHeight: 15
                text: qsTr('addContact')
                onClicked: window.setView('ContactEdit')
            }
        }
    }

    // ---------------------------------------------------------------------------
    // Contacts list.
    // ---------------------------------------------------------------------------





Rectangle{
    Layout.fillWidth: true
    Layout.fillHeight: true
    color: "black"

    Rectangle {
        id:contactList
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        height: 500
        width:300
        color: ContactsStyle.backgroundColor.color

        ScrollableListView {
            id:scoljlkh
            anchors.fill: parent
            spacing: 0

            model: ContactsEnreachListProxyModel {
                id: contacts
                onLoadedContacts:{

                    console.log("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz loaded contacts "+lastsipcontact);
                    isBusy=false;
                    contactEditLoader.setSource('ContactEdit.qml', {
                                                    sipAddress: lastsipcontact
                                                })

                console.debug("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
                }
            }

            Connections {
                target: contacts

                onLoadedContacts: {
                    console.log("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz loaded contacts 0 "+lastsipcontact);
                    console.debug("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");

                }
            }
            delegate: Borders {
                bottomColor: ContactsStyle.contact.border.colorModel.color
                bottomWidth: ContactsStyle.contact.border.width
                height: ContactsStyle.contact.height
                width: 800

                // ---------------------------------------------------------------------

                Rectangle {
                    id: contact

                    anchors.fill: parent
                    color: ContactsStyle.contact.backgroundColor.normal.color

                    // -------------------------------------------------------------------

                    Component {
                        id: container1

                        RowLayout {
                            spacing: ContactsStyle.contact.spacing

//                            PresenceLevel {
//                                id: presenceLevel
//                                Layout.preferredHeight: ContactsStyle.contact.presenceLevelSize
//                                Layout.preferredWidth: ContactsStyle.contact.presenceLevelSize
//                                level: $modelData.presenceLevel
//                                timestamp: $modelData.presenceTimestamp
//                            }

//                            Text {
//                                Layout.fillWidth: true
//                                color: ContactsStyle.contact.presence.colorModel.color
//                                elide: Text.ElideRight
//                                font.pointSize: ContactsStyle.contact.presence.pointSize
//                                text: presenceLevel.text
//                                visible: presenceLevel.visible
//                            }
                        }
                    }

                    Component {
                        id: container2

                        Item {
                            ActionBar {
                                id:actionBar
                                anchors {
                                    left: parent.left
                                    verticalCenter: parent.verticalCenter
                                }
                                iconSize: ContactsStyle.contact.actionButtonsSize

                                ActionButton {
                                    isCustom: true
                                    backgroundRadius: 90
                                    colorSet: ContactsStyle.videoCall
                                    visible: SettingsModel.videoAvailable && SettingsModel.outgoingCallsEnabled && SettingsModel.getShowStartVideoCallButton()

                                    onClicked: actions.itemAt(0).open()
                                }

                                ActionButton {
                                    isCustom: true
                                    backgroundRadius: 90
                                    colorSet: ContactsStyle.call
                                    visible: SettingsModel.outgoingCallsEnabled

                                    onClicked: actions.itemAt(1).open()
                                }

                                ActionButton {
                                    isCustom: true
                                    backgroundRadius: 90
                                    colorSet: SettingsModel.getShowStartChatButton() ? ContactsStyle.chat : ContactsStyle.history
                                    visible: SettingsModel.standardChatEnabled
                                    onClicked: actions.itemAt(2).open()
                                }

                                ActionButton {
                                    isCustom: true
                                    backgroundRadius: 90
                                    colorSet: SettingsModel.getShowStartChatButton() ? ContactsStyle.chat : ContactsStyle.history
                                    visible: SettingsModel.secureChatEnabled && $modelData && $modelData.hasCapability(LinphoneEnums.FriendCapabilityLimeX3Dh)
                                    enabled: AccountSettingsModel.conferenceUri != ''
                                    Icon{
                                        icon:'secure_level_1'
                                        iconSize:parent.height/2
                                        anchors.top:parent.top
                                        anchors.horizontalCenter: parent.right
                                    }
                                    onClicked: {actions.itemAt(3).open()}
                                    tooltipMaxWidth: actionBar.width
                                    tooltipVisible: AccountSettingsModel.conferenceUri == ''
                                        //: 'You need to set the conference URI in your account settings to create a conference based chat room.' : Tooltip to warn the user that a setting is missing in its configuration.
                                    tooltipText: '- ' + qsTr('missingConferenceURI') + '\n'
                                }
                            }

                            ActionButton {
                                isCustom: true
                                backgroundRadius: 90
                                colorSet: ContactsStyle.deleteAction
                                anchors {
                                    right: parent.right
                                    verticalCenter: parent.verticalCenter
                                }

                                onClicked: _removeContact($modelData)
                                visible: $modelData.contactEnreach.contactType==="personnel"
                            }
                        }
                    }

                    // -------------------------------------------------------------------

                    Repeater {
                        id: actions
                        property ChatRoomModel lastChatRoom
                        property var contactModel: $modelData

                        Connections{
                            target: lastChatRoom
                            onStateChanged: if(state === 1) {
                                                console.debug("Load conversation from contacts")
                                                window.setView('Conversation', {
                                                                   chatRoomModel: lastChatRoom
                                                               })
                                            }
                        }

                        readonly property var handlers: [
                            CallsListModel.launchVideoCall,
                            CallsListModel.launchAudioCall,
                            function (sipAddress) {CallsListModel.launchChat( sipAddress,0 )},
                            function (sipAddress) {CallsListModel.launchChat( sipAddress,1 )}
                        ]

                        model: handlers

                        SipAddressesMenu {
                            relativeTo: loader
                            relativeY: loader.height
                            sipAddresses: actions.contactModel.contactEnreach.sipAddresses

                            onSipAddressClicked: actions.handlers[index](sipAddress)
                        }
                    }

                    // -------------------------------------------------------------------

                    Rectangle {
                        id: indicator

                        anchors.left: parent.left
                        color: 'transparent'
                        height: parent.height
                        width: ContactsStyle.contact.indicator.width
                    }

                    MouseArea {
                        id: mouseArea

                        anchors.fill: parent
                        cursorShape: Qt.ArrowCursor

                        MouseArea {
                            anchors.fill: parent
                            //visible: $modelData.contactEnreach.contactType==="personnel"
                            onClicked:
                                contactEditLoader.setSource('ContactEdit.qml', {
                                                                sipAddress: $modelData.contactEnreach.sipAddresses[0]
                                                            })
                               // window.setView('ContactEdit', )
                        }

                        RowLayout {
                            anchors {
                                fill: parent
                                leftMargin: 10
                                rightMargin: ContactsStyle.contact.rightMargin
                            }
                            spacing: ContactsStyle.contact.spacing

                            Item {
                                Layout.preferredHeight: parent.height
                                Layout.preferredWidth: parent.height

                                Avatar {
                                    anchors.centerIn: parent
                                    username: $modelData.contactEnreach.fullName
                                    height: ContactsStyle.contact.avatarSize
                                    width: ContactsStyle.contact.avatarSize
                                }
                            }

                            Text {
                                Layout.fillHeight: true
                                Layout.preferredWidth: 100

                                color: ContactsStyle.contact.username.colorModel.color
                                elide: Text.ElideRight

                                font {
                                    bold: true
                                    pointSize: ContactsStyle.contact.username.pointSize
                                }
                                font.family: SettingsModel.textMessageFont.family

                                text: UtilsCpp.encodeTextToQmlRichFormat($modelData.contactEnreach.fullName)
                                textFormat: Text.RichText
                                verticalAlignment: Text.AlignVCenter
                            }

                            // Container.
                            Loader {
                                id: loader

                                Layout.fillWidth: true
                                Layout.fillHeight: true
                                sourceComponent: container1
                            }
                        }
                    }

                    // -------------------------------------------------------------------

                    states: State {
                        when: mouseArea.containsMouse

                        PropertyChanges {
                            color: ContactsStyle.contact.backgroundColor.hovered.color
                            target: contact
                        }

                        PropertyChanges {
                            color: ContactsStyle.contact.indicator.colorModel.color
                            target: indicator
                        }

                        PropertyChanges {
                            sourceComponent: container2
                            target: loader
                        }
                    }
                }
            }


        }
    }

    Rectangle{
     id:contactEditId
    //color: 'red'
    //Layout.fillHeight: true
    //Layout.fillWidth: true
    anchors.left: contactList.right
    anchors.right: parent.right
    anchors.top: parent.top
    anchors.bottom: parent.bottom
    height: 50
    width:50
    Image {
            visible: false
              source: "qrc:/assets/images/appBackground.png"
              anchors.fill: parent
              anchors.centerIn: parent
              width: 50
              height: 50
              fillMode: Image.PreserveAspectCrop

          }

    Loader {
        id: contactEditLoader
        anchors.fill: parent
        source:'Home.qml'
    }


}
}

Component.onCompleted:{
    console.log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx contactList load completed")
    console.log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx contactList load completed 0 "+
                contacts.mcontacts
                )
    console.log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx contactList load completed 1 "+
                actions.contactModel.contactEnreach.sipAddresses
                )
    console.log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx contactList load completed 2 "+
                parent.model.contactEnreach.sipAddresses[0]
                )

    contactEditLoader.setSource('ContactEdit.qml', {
                                    sipAddress: contacts.contactEnreach.sipAddresses[0]
                                })
}


Loader{
       id:busyIndicatorLoader
       source: "qrc:/ui/modules/Common/Animations/MyBusyIndicator.qml"
       visible: isBusy
       anchors.fill: parent
       onVisibleChanged: {
           console.log("visibleeee ", isBusy)
       }
 }
   Rectangle {
          id: busyOverlay
          color: "transparent"
          anchors.fill: parent
          visible: busyIndicatorLoader.visible
          MouseArea {
              anchors.fill: parent
              onClicked: {
                  // Prevent interaction with the main page while busy
              }
          }
  }

}
