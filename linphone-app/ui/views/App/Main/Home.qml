import QtQuick 2.7
import QtQuick.Layouts 1.3

import Common 1.0
import Linphone 1.0
import ConstantsCpp 1.0

import App.Styles 1.0

// =============================================================================

ColumnLayout {
    spacing: 0

    // ---------------------------------------------------------------------------
    // Info.
    // ---------------------------------------------------------------------------
/*
    Item {
        id: infoItem
        Layout.fillHeight: true
        Layout.fillWidth: true

        ColumnLayout {
            anchors.verticalCenter: parent.verticalCenter
            spacing: 0

            height: AssistantHomeStyle.info.height
            width: parent.width

            Icon {
                //anchors.horizontalCenter: parent.horizontalCenter
                Layout.alignment: Qt.AlignHCenter

                icon: 'home_account_assistant'
                iconSize: AssistantHomeStyle.info.iconSize
            }

            Text {
                height: AssistantHomeStyle.info.title.height
                Layout.fillWidth: true

                color: AssistantHomeStyle.info.title.colorModel.color
                elide: Text.ElideRight

                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter

                font {
                    bold: true
                    pointSize: AssistantHomeStyle.info.title.pointSize
                }

                text: qsTr('homeTitle')
            }

            Text {
                height: AssistantHomeStyle.info.description.height
                Layout.fillWidth: true
                //width: parent.width

                color: AssistantHomeStyle.info.description.colorModel.color
                elide: Text.ElideRight
                font.pointSize: AssistantHomeStyle.info.description.pointSize
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                wrapMode: Text.Wrap
                text: "NetcomPhone, l'outil de communication ultime qui révolutionne votre expérience téléphonique. Restez connecté, communiquez en toute simplicité et profitez d'une qualité sonore exceptionnelle pour des échanges inoubliables, à portée de main."
            }


        }
    }
*/
}
