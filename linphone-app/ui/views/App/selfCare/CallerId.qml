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
    Column {
      anchors.fill: parent
      width: 200

        // Create a custom model
      PstnModel {
          id: model
      }

      Form {
          orientation: Qt.Vertical
          width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
         // anchors.horizontalCenter: parent.horizontalCenter

          FormLine {
              FormGroup {
                  label:"Mon numéro personnalisé"
                  ComboBox  {
                         width: 200
                         model: model
                        textRole: "display"
                        currentIndex: 0
                        onCurrentIndexChanged: {
                                // Execute code when an item is selected
                                console.log("Selected index:", currentIndex)
                            if(currentIndex>0)
                               model.updateCustomNumber(currentIndex)
                        }
                     }
              }
              FormGroup{
                  label:"Masquer mon numéro"
                  Switch{
                         anchors.verticalCenter: parent.verticalCenter
                         width:50
                                              //Layout.preferredWidth: 50
                         indicatorStyle: SwitchStyle.aux
                         enabled:true
                         checked: model.isHideCustomNumber
                         onClicked:{// model.isHideCustomNumber= !model.isHideCustomNumber
                             model.hideCallerIdByUsername(!model.isHideCustomNumber)
                            }

                       }

              }


          }

      }





}
}

