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
    // ---------------------------------------------------------------------------

    signal entrySelected (TimelineModel entry)
    signal showHistoryRequest()

    // ---------------------------------------------------------------------------
    property bool showFilterView : false
    color: TimelineStyle.colorModel.color

    ColumnLayout {
        anchors.fill: parent
        spacing: 0


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

            delegate: TimelineItem{
                timelineModel: $modelData
                modelIndex: index
                optionsTogglable: timeline.optionsTogglable
                actions: timeline.actions
                Connections{
                    target: $modelData
                    onSelectedChanged:{
                        if(selected) {
                            view.currentIndex = index;
                        }
                    }
                }
            }
        }
    }
}