import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2
import Common 1.0
import Linphone 1.0
import Utils 1.0
import UtilsCpp 1.0
import LinphoneEnums 1.0

import App.Styles 1.0

import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================
Item{

    ColumnLayout {
        id: mainItem
        spacing: 20
         anchors.fill: parent
        // ---------------------------------------------------------------------------
        // Title
        // ---------------------------------------------------------------------------

        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: ConferencesStyle.bar.height

            color: ConferencesStyle.bar.backgroundColor.color
            Text{
                anchors.fill: parent
                verticalAlignment: Qt.AlignVCenter

                anchors.leftMargin: 40

                color: ConferencesStyle.bar.text.colorModel.color
                font {
                    bold: true
                    pointSize: ConferencesStyle.bar.text.pointSize
                }
                //: 'Meetings' : Conference list title.
                text: qsTr('Equipes')
            }
        }

        TextButtonB {
                text: qsTr('Créer une équipe')
                onClicked: {
                            window.detachVirtualWindow()
                            window.attachVirtualWindow(Qt.resolvedUrl('Dialogs/NewChatRoom.qml')
                                                       ,{})
                        }
            }
        // ---------------------------------------------------------------------------
        // Conferences list.
        // ---------------------------------------------------------------------------

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            color: ConferencesStyle.backgroundColor.color

            ScrollView {

                width: parent.width
                height: 550
                GridLayout {
                    rowSpacing: 10
                    columnSpacing: 15
                    rows:listGroupsModel.length/5
                    columns: 5

                    Repeater {
                        id:listGroups
                        model: TimelineProxyModel {
                            id: listGroupsModel
                            listSource: TimelineProxyModel.Main
                            filterFlags: TimelineProxyModel.GroupChatRoom
                        }

                        delegate: Rectangle {
                            id: rec
                            height: 80
                            width: 150
                            radius: 10
                           color: ConversationStyle.bar.backgroundColor.color

                            Text {
                                id: group
                                text: modelData.chatRoomModel.subject
                                width: parent.width
                                height: parent.height
                                // anchors.centerIn: parent
                                horizontalAlignment: Text.AlignHCenter
                                verticalAlignment: Text.AlignVCenter
                                font.pointSize: Units.dp * 12
                                color:"#141B6C"
                            }
                            MouseArea {
                                id: mouseArea
                                width: parent.width
                                height: parent.height
                                anchors.right: parent.right
                                onClicked: {
                                    window.setView('GroupChatManagement', { chatRoomModel: modelData.chatRoomModel
                                                                                                 })
                                }

                            }
                            Component.onCompleted: {
                                console.log("Model Data:", listGroupsModel.count);
                            }
                        }
                    }
                }



            }

        }
    }
    MessageBanner{
        id: messageBanner

        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 25

        height: fitHeight
    }
}
