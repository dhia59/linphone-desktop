import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0
import UtilsCpp 1.0
import App.Styles 1.0

// =============================================================================

Rectangle {
    width: parent.width
    height: parent.height
    property ForwardingModel selectedForwardingData: null
    ColumnLayout{
        spacing: 50
        Row{

            TextButtonB {
                width:100

                text: "Ajouter"
                onClicked: {
                    addEditForwardingRule.currentForwardingData= null;
                    addEditForwardingRule.resetForm();

                }
            }
        }

        Row{
            y:50
              spacing: 10
              Column{
                  width:showForm ?parent.width/2 : parent.width
                  Rectangle{
                      width: parent.width
                      Forwardings{
                          id: forwardings
                          onEntryClicked: {
                              selectedForwardingData= entry
                              addEditForwardingRule.currentForwardingData= entry
                              addEditForwardingRule.populate()
                          }
                       }
                  }
              }
              Column{
                  Rectangle{
                       width: parent.width/2
                       x: 600
                       y: 0
                      AddEditForwardingRule{
                          id:addEditForwardingRule
                          currentForwardingData: selectedForwardingData
                      }
                  }
              }





        }

    }

}

