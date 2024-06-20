import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0

import App.Styles 1.0

// =============================================================================
Rectangle {
    property ForwardingModel selected
    signal entryClicked (var entry)
    Column {
      anchors.fill: parent
      //width: 200
          ForwardingManagement{
              id: forwardingManagement
          }
          ForwardingListProxyModel {
              id: forwardingModel
              Component.onCompleted: { console.log("forwarding model ", forwardingModel) }
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

                        TextButtonB {
                            text: "update"
                            onClicked: {
                                console.log("updateeeeee:", modelData.filtersOnTargetNumber)
                                entryClicked(modelData)
                                selected = modelData
                            }
                        }
                    }
                    Column{
                        TextButtonB {
                            text: "delete"
                            onClicked: {
                                console.log("delete:", modelData)
                                if (forwardingManagement.deleteForwardingRule(modelData.forwardingID)) {
                                    console.log("deleteddd")
                                }
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

              }








