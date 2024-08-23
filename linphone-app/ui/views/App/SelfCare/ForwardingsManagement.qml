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

    anchors.fill: parent
    property ForwardingModel selectedForwardingData: null

        RowLayout{
            id:addbuttonid

            width:100
            height: 50
            Rectangle{

                width:100
                height: 50
              //  color: "purple"


            TextButtonB {

                width:100
                height: 50

                text: "Ajouter"
                onClicked: {
                    addEditForwardingRule.currentForwardingData= null;
                    addEditForwardingRule.resetForm();

                }
            }
            }
        }

        RowLayout{

              spacing: 10
              anchors.topMargin: 60
              anchors.top: addbuttonid.bottom
                anchors.fill: parent
                  Layout.fillWidth: true
                  Layout.fillHeight: true
              ColumnLayout{
                  width:300
                 // Layout.fillHeight: true

                  Rectangle{
                      width: 150
                      anchors.fill: parent
                      Layout.fillHeight: true
                      //color: "gray"
                      Forwardings{
                          id: forwardings
                          onEntryClicked: {
                              selectedForwardingData= entry
                              addEditForwardingRule.currentForwardingData= entry
                              addEditForwardingRule.populate()
                          }
                       }
                  }
                  Rectangle{
                      width: 300
                      Layout.fillHeight: true


                  }
              }
              ColumnLayout{
                  Layout.fillWidth: true
                  Layout.fillHeight: true
                  Rectangle{

                       width: 250
                       anchors.fill: parent
                     //  color: "yellow"
                      AddEditForwardingRule{
                          id:addEditForwardingRule
                          currentForwardingData: selectedForwardingData
                      }
                  }
              }





        }



}

