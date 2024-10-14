import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import Qt.labs.platform 1.0
import Qt.labs.settings 1.0
import Common 1.0
import Linphone 1.0
import Utils 1.0
import Units 1.0
import App.Styles 1.0
import ColorsList 1.0
import UtilsCpp 1.0


import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================


Rectangle{
    width: parent.width
    property var timeLine: timeLine
    property alias conversationLoader   :conversationLoader
    RowLayout {
        id: mainColumn
        anchors.fill: parent
        spacing: 5
        // -----------------------------------------------------------------------

        // -----------------------------------------------------------------------
        // Content.
        // -----------------------------------------------------------------------

        // Main menu.
        // History.
        Component.onCompleted: {


             if(timeline.model.rowCount()>0)
                 timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true

         }
        Rectangle{
            anchors.fill: parent
            border.color: "black"
            border.width: 1

            Text {
                text:if(timeline !== null) timeline.firstItem.name
                color: "black"
                font.pointSize: 16
            }
            anchors.top: tToolbar.bottom
            y:0
            x:0
            height: parent.height
            Layout.fillHeight: true
            width:250
            Layout.fillWidth: true
            Timeline {
                id: timeline
                anchors.left: menu.right
                visible:showTimeline
                width:250
                height: contentLoader.height
                Layout.fillHeight: true
                model: TimelineProxyModel{
                    listSource: TimelineProxyModel.Main
                    onListSourceChanged: console.log("listSourceChanged")
                }

                onEntrySelected:{
                    if( entry ) {

                        if( entry.selected){
                            console.debug("Load conversation from entry selected on timeline ", entry.chatRoomModel)
                            menu.defaultSelectedEntry=callsEntry
                            conversationLoader.setSource('Conversation.qml', {
                                               chatRoomModel:entry.chatRoomModel
                                           })

                            /*showTimeline= true
                                timeLine.visible= true*/
                        }
                    }else{
                        console.log("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ else", entry.selected)
                        window.setView('Home', {})
                    }
                    //menu.resetSelectedEntry()
                }
                onShowHistoryRequest: {
                    // timeline.model.unselectAll()
                    window.setView('HistoryView')
                }

                Component.onCompleted: {
                    console.log("ListView is completed")

                }
            }

        }
        Rectangle {
            id: name
            Layout.fillHeight: true
            Layout.fillWidth: true
            Loader{
                id: conversationLoader
                source: 'Conversation.qml'
            }
        }





    }
}

