import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0

import App.Styles 1.0
RowLayout {


    Layout.fillWidth: true
    Layout.fillHeight: true
// =============================================================================
Rectangle {


    Layout.fillWidth: true
    Layout.fillHeight: true
    color: "#F4F4F4"


    ColumnLayout {
        Layout.fillWidth: true
        Layout.fillHeight: true

        // Create a custom model
      PstnModel {
          id: model
      }
      CallerManagement{
          id: callerModel
      }

      Form {
          orientation: Qt.Vertical
          spacing:20
          width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
         // anchors.horizontalCenter: parent.horizontalCenter

          FormLine {

              FormGroup {
                  label:"Mon numéro de sortie"
                  ComboBox  {
                         width: 200
                         model: model
                        textRole: "display"
                        currentIndex: 0
                        onCurrentIndexChanged: {

                                console.log("Selected index:", currentIndex)
                            if(currentIndex>0)
                               model.updateCustomNumber(currentIndex)
                            currentIndex= 0;
                        }
                     }
              }



          }
          FormLine{
              FormGroup{
                  label:"Masquer mon numéro"
                  Switch{
                         anchors.verticalCenter: parent.verticalCenter
                         width:50
                                              //Layout.preferredWidth: 50
                         indicatorStyle: SwitchStyle.aux
                         enabled:true
                         checked: callerModel.isHideCustomNumber
                         onClicked:{// model.isHideCustomNumber= !model.isHideCustomNumber
                             callerModel.hideCallerIdByUsername(!callerModel.isHideCustomNumber)
                            }

                       }

              }
          }
          FormLine{
              FormGroup{
                  label:"Ne pas déranger"
                  Switch{
                         anchors.verticalCenter: parent.verticalCenter
                         width:50
                         indicatorStyle: SwitchStyle.aux
                         enabled:true
                         checked: callerModel.dnd
                         onClicked:{
                             callerModel.setDndByUsername(!callerModel.dnd)
                            }

                       }

              }
          }

      }

//loader

      Loader{
                  id:busyIndicatorLoader
                  source: "qrc:/ui/modules/Common/Animations/MyBusyIndicator.qml"
                  visible: model.isLoading || callerModel.isLoading
                  //anchors.fill: parent
                  anchors.centerIn: parent
                    onVisibleChanged: {
                      console.log("visibleeee  caller", model.isLoading)
                  }
            }


}


}
}
