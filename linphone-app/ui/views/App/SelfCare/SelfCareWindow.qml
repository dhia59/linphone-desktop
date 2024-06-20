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
ApplicationWindow {
    id:window
    minimumHeight: SettingsWindowStyle.height
    minimumWidth: SettingsWindowStyle.width

    title: qsTr('Self care')
    signal loadForwardings ()

    // Principal conteneur
    Row {
        anchors.fill: parent

        // Menu latéral
        Column{
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
                                  width: parent.width
                                  height: 40
                                  color: sideBar.currentIndex===index?"#222154": "#b0b0b0"
                                  radius: 10
                                  Text {
                                      anchors.centerIn: parent
                                      text: modelData
                                      color: "#FFFFFF"
                                  }
                                   MouseArea{
                                       anchors.fill: parent
                                       onClicked: {
                                           console.log('clickedddddddddd:', index)
                                           sideBar.currentIndex= index
                                       }
                                   }

                                  Rectangle {
                                      id: control
                                      anchors.fill: parent
                                      color: "transparent"

                                  }
                              }
                          }
                      }
                  }

        }
    Column{
        x:210
    Rectangle {
        color: "#ffffff"
        anchors.fill: parent

        Column {
            spacing: 10
            anchors.fill: parent
            anchors.margins: 20

            Item{
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    StackLayout {
                        anchors.fill: parent
                        currentIndex:sideBar.currentIndex
                        CallerId {}
                        ForwardingsManagement {}
                        VoiceMailManagement{}
                        AccountManagement{}
                    }
        }
    }

}



    }
}
}
