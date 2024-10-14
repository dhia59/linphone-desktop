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
    color: "#F4F4F4"
    anchors.fill: parent
    property ForwardingModel selectedForwardingData: null

    RowLayout {
        id: addbuttonid
        width: parent.width // Ajustez la largeur si nécessaire
        height: 50

        Rectangle {
            color: "transparent"
            Layout.fillWidth: true
            height: 50

        }
        Rectangle {
            id: addRule
            width:250
            height: 50
            color:  "#0D6160"
            border.color: "#1E1E1E"
            border.width: 1
            radius: 10
            Text {
                anchors.centerIn: parent
                text: "Ajouter une règle de redirection"
                color:  "#FFFFFF"
                font.pointSize: Units.dp * 10
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    addEditForwardingRule.currentForwardingData = null;
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
            width:500

            Rectangle{
                color: "#F4F4F4"
                anchors.fill: parent
                Layout.fillHeight: true
                anchors.leftMargin: 20
                border.color: "#1E1E1E"
                border.width: 1
                radius: 10
                z:1
                Forwardings{
                    id: forwardings
                    anchors.centerIn:parent
                    anchors.topMargin: 20
                    onEntryClicked: {
                        selectedForwardingData= entry
                        addEditForwardingRule.currentForwardingData= entry
                        addEditForwardingRule.populate()
                    }
                }
            }
        }
        ColumnLayout{
            Layout.fillWidth: true
            Layout.fillHeight: true
            Rectangle{
                border.color: "#1E1E1E"
                border.width: 1
                radius: 10
                width: 250
                anchors.fill: parent
                color: "#F4F4F4"
                AddEditForwardingRule{
                    id:addEditForwardingRule
                    currentForwardingData: selectedForwardingData
                }
            }
        }





    }



}

