import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0
import 'SelfCareWindow.js' as Logic
import App.Styles 1.0
import 'qrc:/ui/scripts/Utils/utils.js' as Utils
import Units 1.0
// =============================================================================
Rectangle {
    id:swindowid
    //color: "gray"
    // minimumHeight: 600
    //minimumWidth: 400
    function setView (view, props, callback) {
        Logic.setView(view, props, callback)
    }
    property var views: ['CallerId','ForwardingsManagement','VoiceMailManagement','AccountManagement']
    // Principal conteneur
    RowLayout {
        anchors.fill: parent



        // Menu latéral
        ColumnLayout {
            Rectangle {
                width:250
                Layout.fillHeight: true
                anchors.verticalCenter: parent.verticalCenter
                Column {
                    anchors.margins: 10
                    anchors.topMargin: 50
                  //  anchors.verticalCenter: parent.verticalCenter
                    spacing: 10
                    Layout.fillHeight: true
                    width: parent.width
                    id: sideBar
                    property int currentIndex: 0
                    Repeater {
                        model: ["Numéro personnalisé", "Redirection", "Messagerie vocale", "Compte"]
                        delegate: Rectangle {
                            id: menuItem
                            width:200
                            height: 40
                            color: (sideBar.currentIndex === index) ? "#141B6C" : "#f2f2f2"
                            radius: 10

                            Text {
                                anchors.centerIn: parent
                                text: modelData
                                color:(sideBar.currentIndex === index)? "#FFFFFF": "#000000"
                                font.pointSize: Units.dp * 10
                            }

                            MouseArea {
                                anchors.fill: parent
                                onClicked: {
                                    sideBar.currentIndex = index;
                                    swindowid.setView(views[index]);
                                }
                            }
                        }
                    }

                }
            }
        }

        ColumnLayout {
            // x: 210
            Rectangle {
                //color: "yellow"
                anchors.fill: parent

                ColumnLayout {
                    spacing: 10
                    anchors.fill: parent
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    anchors.margins: 20

                    Loader {
                        id: mainLoader
                        anchors.fill: parent
                        source: 'CallerId.qml'
                        onSourceChanged: {
                            // Update colors of menu items
                            for (var i = 0; i < sideBar.children.length; ++i) {
                                var item = sideBar.children[i];
                                if (item instanceof Rectangle) {
                                    item.color = (sideBar.currentIndex === i) ? "#141B6C" :  "#f2f2f2";
                                }
                            }
                        }
                    }
                }
            }
        }
    }


}



