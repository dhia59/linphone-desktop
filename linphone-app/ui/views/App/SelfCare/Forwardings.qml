import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0
import 'qrc:/ui/scripts/Utils/utils.js' as Utils
import App.Styles 1.0
import UtilsCpp 1.0
// =============================================================================
Rectangle {
    property ForwardingModel selected
    signal entryClicked (var entry)
    Column {
        anchors.fill: parent
        //width: 200

        ForwardingManagement{
            id: forwardingManagement
            onActivationFailed:{
                window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                               descriptionText: "Cette règle de redirection ne peut-être créée, car elle chevauche une autre règle existante. "
                                           }, function (status) {
                                               if (status) {

                                               }
                                           })
            }
        }
        ForwardingListProxyModel {
            id: forwardingModel

        }

        Repeater {
            anchors.fill: parent
            model: forwardingModel
            delegate: Row {
                width: parent.width
                height: 50
                y: index * 50
                spacing: 5
                Column{
                    Text {
                        width: 200
                        text: modelData.label
                    }
                }
                Column{
                    ActionButton {
                        isCustom: true
                        backgroundRadius: 4
                        colorSet: SettingsWindowStyle.buttons.editProxy

                        onClicked: {
                            console.log("updateeeeee:", modelData.filtersOnTargetNumber)
                            entryClicked(modelData)
                            selected = modelData
                        }
                    }
                }
                Column{
                    ActionButton {
                        isCustom: true
                        backgroundRadius: 4
                        colorSet: SettingsWindowStyle.buttons.deleteProxy

                        onClicked: {
                            console.log("delete:", modelData)
                            window.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
                                                           descriptionText: qsTr('removeContactDescription'),
                                                       }, function (status) {
                                                           if (status) {
                                                               if (forwardingManagement.deleteForwardingRule(modelData.forwardingID)) {
                                                                   console.log("deleteddd")
                                                               }
                                                           }
                                                       })

                        }
                    }
                }
                Column{
                    Switch{
                        indicatorStyle: SwitchStyle.aux
                        enabled:true
                        checked: modelData.activated
                        onClicked:{
                            console.log("activeeeeee ", modelData.activated)
                            forwardingManagement.activateDesactivateForwardingRule(modelData)
                        }

                    }
                }


            }

        }


    }
    Loader{
        id:busyIndicatorLoader
        source: "qrc:/ui/modules/Common/Animations/MyBusyIndicator.qml"
        visible: forwardingModel.isLoading ||forwardingManagement.isLoading
        //anchors.fill: parent
        anchors.centerIn: parent
        /*x:500
                y:300*/
        onVisibleChanged: {
            console.log("visibleeee  forwarding", forwardingModel.isLoading)
              console.log("visibleeee  management", forwardingManagement.isLoading)
        }
    }
}








