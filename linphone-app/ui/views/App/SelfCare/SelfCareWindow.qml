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
	id: window
	
	minimumHeight: SettingsWindowStyle.height
	minimumWidth: SettingsWindowStyle.width
	
    title: qsTr('Self care')

	onClosing: {
		logViewer.active = false
		SettingsModel.settingsWindowClosing()
		tabBar.setCurrentIndex(0)
	}
	
	// ---------------------------------------------------------------------------
	
	Shortcut {
		sequence: StandardKey.Close
		onActivated: window.hide()
	}
	
	// ---------------------------------------------------------------------------
	
	Rectangle {
		anchors.fill: parent
		color: SettingsWindowStyle.colorModel.color
	}
	
	ColumnLayout {
		anchors.fill: parent
		spacing: 0
		
		// -------------------------------------------------------------------------
		// Navigation bar.
		// -------------------------------------------------------------------------
    /*    Item{
			Layout.fillWidth: true
			Layout.preferredHeight: TabButtonStyle.text.height
			RowLayout {
				anchors.fill: parent
				spacing: 0
				TabBar {
					id: tabBar
                    y: 0
                    //onCurrentIndexChanged: SettingsModel.onSettingsTabChanged(currentIndex)
					spacing:0
					TabButton {
						iconName: TabButtonStyle.icon.sipAccountsIcon
                        text: qsTr('redirection')
						width: implicitWidth
					}
					
                    TabButton {
                        iconName: TabButtonStyle.icon.audioIcon
                        text: qsTr('DND')
                        width: implicitWidth
                    }
					
                    TabButton {
                        visible: SettingsModel.videoEnabled || SettingsModel.developerSettingsEnabled
                        iconName: TabButtonStyle.icon.videoIcon
                        text: qsTr("Numéro d'affichage")
                        //width: visible ? implicitWidth : 0
                    }
					
                    TabButton {
                        iconName: TabButtonStyle.icon.callIcon
                        text: qsTr('masquage de numéro')
                        width: implicitWidth
                    }
					
                    TabButton {
                        enabled: SettingsModel.showNetworkSettings || SettingsModel.developerSettingsEnabled
                        iconName: TabButtonStyle.icon.networkIcon
                        text: qsTr('annonce VM')
                        width: implicitWidth
                    }
					
                    TabButton {
                        visible: SettingsModel.tunnelAvailable()
                        enabled: visible
                        iconName: TabButtonStyle.icon.sipAccountsIcon
                        //: 'Tunnel' : Tab title for tunnel section in settings.
                        text: qsTr('réinitialisation de mdp')
                       // width: visible ? implicitWidth : 0
                    }
					
                   /* TabButton {
                        iconName: TabButtonStyle.icon.advancedIcon
                        text: qsTr('uiTab')
                        width: implicitWidth
                    }
					
                    TabButton {
                        iconName: TabButtonStyle.icon.advancedIcon
                        text: qsTr('uiAdvanced')
                        width: implicitWidth
                    }

				}
			

			}
			Rectangle{
				id: hideBar
				anchors.fill: parent
				color: TabButtonStyle.backgroundColor.normal.color
                visible:false //logViewer.active
			}
        }
*/
		
		// -------------------------------------------------------------------------
		// Content.
		// -------------------------------------------------------------------------

        CallerId{

        }


		// -------------------------------------------------------------------------
		// Buttons.
		// -------------------------------------------------------------------------
     /*   TextButtonB {
            Layout.alignment: Qt.AlignRight
            Layout.topMargin: SettingsWindowStyle.validButton.topMargin
            Layout.bottomMargin: SettingsWindowStyle.validButton.bottomMargin
            Layout.rightMargin: SettingsWindowStyle.validButton.rightMargin

            text: qsTr('validButton')

            onClicked: window.close()
        }
        */
	}


}
