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
    color: "#F4F4F4"
    anchors.fill: parent

    function setView (view, props, callback) {
        Logic.setView(view, props, callback)
    }
    property var views: ['CallerId','ForwardingsManagement','VoiceMailManagement','AccountManagement']
    // Principal conteneur
    RowLayout {
        anchors.fill: parent
        spacing: 20


        // Menu latéral

        Rectangle {
            id:menu
            anchors.topMargin: 20
            anchors.left: parent.left
            anchors.leftMargin:   20

            width:192
            height: 164
            anchors.top: parent.top
            color: "transparent"
            radius: 5
            border.color: "#1E1E1E"
            border.width: 2
            z:1

            Column {
                anchors.centerIn: parent
                spacing: 0
                id: sideBar
                property int currentIndex: 0
                Repeater {
                    model: ["Numéro de sortie", "Redirection", "Messagerie vocale", "Compte"]
                    delegate: Rectangle {
                        id: menuItem
                        width:190
                        height: 40
                        color: (sideBar.currentIndex === index) ? "#0D6160": "#E9E9E9"
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


        ColumnLayout {
            // x: 210
            Rectangle {
                color: "#F4F4F4"
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
                                    item.color = (sideBar.currentIndex === i) ? "#0D6160" :  "#E9E9E9";
                                }
                            }
                        }
                    }
                }
            }
        }
    }


}



