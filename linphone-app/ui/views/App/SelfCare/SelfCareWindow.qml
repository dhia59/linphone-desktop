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

// =============================================================================
ApplicationWindow {
    id:window
    minimumHeight: SettingsWindowStyle.height
    minimumWidth: SettingsWindowStyle.width

    title: qsTr('Self care')
    function setView (view, props, callback) {
        Logic.setView(view, props, callback)
    }
    property var views: ['CallerId','ForwardingsManagement','VoiceMailManagement','AccountManagement']
    // Principal conteneur
    Row {
        anchors.fill: parent

        // Menu latéral
        Column {
            Rectangle {
                width: 200
                color: "#f0f0f0"

                Column {
                    spacing: 10
                    anchors.fill: parent
                    anchors.margins: 10
                    id: sideBar
                    property int currentIndex: 0

                    // Items du menu comme des rectangles avec des coins arrondis
                    Repeater {
                        model: ["Numéro personnalisé", "Redirection", "Messagerie vocale", "Compte"]
                        delegate: Rectangle {
                            id: menuItem
                            width: parent.width
                            height: 40
                            color: (sideBar.currentIndex === index) ? "#222154" : "#b0b0b0"
                            radius: 10

                            Text {
                                anchors.centerIn: parent
                                text: modelData
                                color: "#FFFFFF"
                            }

                            MouseArea {
                                anchors.fill: parent
                                onClicked: {
                                    sideBar.currentIndex = index;
                                    window.setView(views[index]);
                                }
                            }
                        }
                    }
                }
            }
        }

        Column {
            x: 210
            Rectangle {
                color: "#ffffff"
                anchors.fill: parent

                Column {
                    spacing: 10
                    anchors.fill: parent
                    anchors.margins: 20

                    Loader {
                        id: mainLoader
                        source: 'CallerId.qml'
                        onSourceChanged: {
                            // Update colors of menu items
                            for (var i = 0; i < sideBar.children.length; ++i) {
                                var item = sideBar.children[i];
                                if (item instanceof Rectangle) {
                                    item.color = (sideBar.currentIndex === i) ? "#222154" : "#b0b0b0";
                                }
                            }
                        }
                    }
                }
            }
        }
    }


}
