import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2
import Common 1.0
import Linphone 1.0
import Utils 1.0
import UtilsCpp 1.0
import LinphoneEnums 1.0
import Units 1.0
import App.Styles 1.0

import 'qrc:/ui/scripts/Utils/utils.js' as Utils


// =============================================================================
Item{
    id:dialog
    property ChatRoomModel chatRoomModel
    height: InfoChatRoomStyle.height
    width: InfoChatRoomStyle.width

    readonly property bool adminMode : chatRoomModel.isMeAdmin && !chatRoomModel.isReadOnly
    Component.onCompleted: {console.log("adminnnnnnnnnnnnnnnnnnnnnnnnnn ", adminMode)}
    // ---------------------------------------------------------------------------
    ColumnLayout {
        id:mainLayout
        anchors.fill: parent
        anchors.topMargin: InfoChatRoomStyle.mainLayout.topMargin
        anchors.leftMargin: InfoChatRoomStyle.mainLayout.leftMargin
        anchors.rightMargin: InfoChatRoomStyle.mainLayout.rightMargin
        spacing: InfoChatRoomStyle.mainLayout.spacing
        // ---------------------------------------------------------------------------
        // Contact bar.
        // ---------------------------------------------------------------------------

        Rectangle {
            id:mainBar
            Layout.fillWidth: true
            Layout.preferredHeight: ConversationStyle.bar.height

            color: ConversationStyle.bar.backgroundColor.color
            clip:false


            Text {
                id: chatrommSubject
                text: chatRoomModel.subject
                anchors.centerIn: parent
                font.pointSize: Units.dp * 14
                color:"#141B6C"
            }


        }


        SmartSearchBar {
            id: smartSearchBar

            Layout.fillWidth: true
            Layout.topMargin: InfoChatRoomStyle.searchBar.topMargin

            showHeader:false

            visible: dialog.adminMode && chatRoomModel.canHandleParticipants

            maxMenuHeight: MainWindowStyle.searchBox.maxHeight
            //: 'Add Participants' : Placeholder in a search bar for adding participant to the chat room
            placeholderText: qsTr('addParticipantPlaceholder')
            //: 'Search participants in your contact list in order to invite them into the chat room.'
            //~ Tooltip Explanation for inviting the selected participants into chat room
            tooltipText: qsTr('addParticipantTooltip')
            actions:[{
                    colorSet: InfoChatRoomStyle.addParticipant,
                    secure: chatRoomModel.haveEncryption,
                    visible: true,
                    secureIconVisibleHandler : function(entry) {
                        return entry && entry.sipAddress && chatRoomModel && chatRoomModel.haveEncryption && UtilsCpp.hasCapability(entry.sipAddress,  LinphoneEnums.FriendCapabilityLimeX3Dh, true);
                    },
                    handler: function (entry) {
                        selectedParticipants.addAddress(entry.sipAddress)
                    },
                }]

            onEntryClicked: {
                selectedParticipants.addAddress(entry.sipAddress)
            }
        }


        ScrollableListViewField {
            Layout.fillHeight: true
            Layout.fillWidth: false
            Layout.preferredWidth: parent.width
            Layout.bottomMargin: 5
            ColumnLayout{
                anchors.fill:parent
                anchors.centerIn: parent
                spacing:0
                Text{
                    Layout.topMargin: InfoChatRoomStyle.results.title.topMargin
                    Layout.leftMargin: InfoChatRoomStyle.results.title.leftMargin
                    //: 'Participant list'
                    text:qsTr('participantList')
                    color: InfoChatRoomStyle.results.title.colorModel.color
                    font.pointSize:InfoChatRoomStyle.results.title.pointSize
                    font.weight: InfoChatRoomStyle.results.title.weight
                }
                Text{
                    Layout.preferredHeight: implicitHeight
                    Layout.rightMargin: InfoChatRoomStyle.results.header.rightMargin
                    Layout.alignment: Qt.AlignRight | Qt.AlignBottom
                    text : qsTr('adminStatus')
                    color: InfoChatRoomStyle.results.header.colorModel.color
                    font.pointSize: InfoChatRoomStyle.results.header.pointSize
                    font.weight: InfoChatRoomStyle.results.header.weight
                    visible: dialog.adminMode && participantView.count > 0

                }

                ParticipantsView {
                    id: participantView
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    showSubtitle:false
                    showSwitch : dialog.adminMode
                    showSeparator: false
                    showAdminStatus:!dialog.adminMode
                    isSelectable: false
                    hoveredCursor:Qt.WhatsThisCursor


                    actions:  dialog.adminMode ? [{
                                                      colorSet: InfoChatRoomStyle.removeParticipant,
                                                      secure:0,
                                                      visible:true,
                                                      tooltipText: 'Remove this participant from the selection',
                                                      handler: function (entry) {
                                                          selectedParticipants.removeModel(entry)
                                                          //							++lastContacts.reloadCount
                                                      }
                                                  }]
                                               : []

                    genSipAddress: ''

                    model: ParticipantProxyModel {
                        id:selectedParticipants
                        chatRoomModel:dialog.chatRoomModel
                        onAddressAdded: smartSearchBar.addAddressToIgnore(sipAddress)
                        onAddressRemoved: smartSearchBar.removeAddressToIgnore(sipAddress)
                        showMe: dialog.adminMode

                    }

                    onEntryClicked: {
                        contactItem.showSubtitle = !contactItem.showSubtitle
                    }
                }
            }
        }


        TextButtonA {
            //: 'Exit group' : Button label
            text: qsTr('quitGroupButton')
            capitalization: Font.AllUppercase
            anchors.horizontalCenter: parent.horizontalCenter
            textButtonStyle: InfoChatRoomStyle.leaveButton
            showBorder: true
            onClicked:{
                chatRoomModel.leaveChatRoom();
                exit(0)
            }
            enabled: !chatRoomModel.isReadOnly

        }

    }

}
