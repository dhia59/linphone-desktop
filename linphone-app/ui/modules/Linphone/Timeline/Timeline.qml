import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5

import Common 1.0
import Common.Styles 1.0
import Linphone 1.0
import Linphone.Styles 1.0
import ColorsList 1.0

import UtilsCpp 1.0

import 'Timeline.js' as Logic
import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================

Rectangle {
    id: timeline
    visible:false
    // ---------------------------------------------------------------------------

    property alias model: view.model
    property string _selectedSipAddress
    property bool showHistoryButton : CoreManager.callLogsCount
    property bool isFilterVisible: searchView.visible || showFilterView
    property bool showFiltersButtons: view.count > 0 || timeline.isFilterVisible || timeline.model.filterFlags > 0
    property bool optionsTogglable: true
    property var actions: []
    // Propriété pour accéder au premier élément du modèle
    property var firstItem: model.get(0)
    property var currentIndex:0
    // ---------------------------------------------------------------------------

    signal entrySelected (TimelineModel entry)
    signal showHistoryRequest()

    // ---------------------------------------------------------------------------
    property bool showFilterView : false
    color: TimelineStyle.colorModel.color

    ColumnLayout {
        anchors.fill: parent
        spacing: 0
       // anchors.topMargin: 10
        // -------------------------------------------------------------------------

        Connections {
            target: model
            onSelectedCountChanged:{
                if(selectedCount<=0) {
                    view.currentIndex = -1
                    timeline.entrySelected('')
                }
            }
            onSelectedChanged : if(timelineModel) timeline.entrySelected(timelineModel)
        }
        ScrollableListView {
            id: view
            Layout.fillHeight: true
            Layout.fillWidth: true
            currentIndex: 0
            spacing:2
            delegate: TimelineItem{
                visible:modelData.chatRoomModel.contactType ==="contact"
                timelineModel: $modelData
                modelIndex: index
                optionsTogglable: timeline.optionsTogglable
                actions: timeline.actions
                Connections{
                    target: $modelData
                    onSelectedChanged:{
                        console.log("+++++++ timeline0  ", $modelData.chatRoomModel.contactType)
                        console.log("+++++++ timeline1  ", modelData.mChatRoomModel.mSelected)
                        console.log("+++++++ timeline2  ", modelData.chatRoomModel.contactModel.vcard.contactType)
                        if(selected) {
                            view.currentIndex = index;
                            currentIndex= index
                        }
                    }
                }

            }
        }
    }
}
