import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import Qt.labs.platform 1.0
import Qt.labs.settings 1.0
import Common 1.0
import Linphone 1.0
import Utils 1.0

import App.Styles 1.0
import ColorsList 1.0
import UtilsCpp 1.0

import 'MainWindow.js' as Logic
import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================

ApplicationWindow {
    id: mainwindow
    property var _lockedInfo
    // ---------------------------------------------------------------------------


    FontLoader {
        id: fontAwesome
        source: "qrc:/assets/fonts/fontawesome-desktop.otf"
        onStatusChanged: {
            if (status === FontLoader.Error) {
                console.error("Failed to load FontAwesome font: " + source);
                errorText.visible = true;
            } else if (status === FontLoader.Ready) {
                console.log("FontAwesome font loaded successfully");
                console.log("Font name: " + fontAwesome.name);
            } else if (status === FontLoader.Loading) {
                console.log("FontAwesome font is loading...");
            }
        }
    }
    function lockView (info) {
        Logic.lockView(info)
    }

    function unlockView () {
        Logic.unlockView()
    }

    function setView (view, props, callback) {
        Logic.setView(view, props, callback)
    }

    // ---------------------------------------------------------------------------
    // Window properties.
    // ---------------------------------------------------------------------------



    minimumHeight: 800
    minimumWidth: 1300

    title: Utils.capitalizeFirstLetter(applicationName)


    // ---------------------------------------------------------------------------

    onActiveFocusItemChanged: Logic.handleActiveFocusItemChanged(activeFocusItem)
    onClosing: Logic.handleClosing(close)

    // ---------------------------------------------------------------------------

    Connections {
        target: CoreManager
        onCoreManagerInitialized: {
            mainWindowLoader.source= AccountSettingsModel.isLoggedIn ?"MainContent.qml": "Login.qml"
            mainWindowLoader.active = true
            accountSettingsModelConnections.target= AccountSettingsModel


        }
    }



    Shortcut {
        sequence: StandardKey.Close
        onActivated: mainwindow.hide()
    }
    // ---------------------------------------------------------------------------




    // ---------------------------------------------------------------------------
    Loader {
        id: mainWindowLoader
        // source: "MainContent.qml"
        active: false
        anchors.fill: parent
        onSourceChanged:  {
            console.log("testttttttttttttttttttttttt state ", AccountSettingsModel.registrationState===0 )
            console.log("testttttttttttttttttttttttt source ",mainWindowLoader.source )
        }

    }


    function loadHistoryView(){
        setView('HistoryView')
        menuWidth=250
        showTimeline=false
        menu.defaultSelectedEntry=callsEntry
    }


    Loader{
        id: customMenuBar
        active:Qt.platform.os === 'osx'
        sourceComponent:MainWindowTopMenuBar{
            /*onDisplayRecordings: {
                if(mainWindowLoader.item)
                    mainWindowLoader.item.timeline.model.unselectAll()
                setView('Recordings')
            }*/
        }

    }
    // ---------------------------------------------------------------------------
    // Url handlers.
    // ---------------------------------------------------------------------------

    Connections {
        target: UrlHandlers

        onSip: {
            mainSearchBar.text = sipAddress
        }
    }

    Connections{
        target: App
        onRequestFetchConfig: {
            mainmainwindow.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
                                                   flat: true,
                                                   //: 'Do you want to download and apply configuration from this URL?' : text to confirm to fetch a specified URL
                                                   descriptionText: '<b>'+qsTr('confirmFetchUri')
                                                                    +'</b><br/><br/>'+filePath,
                                               }, function (status) {
                                                   if (status) {
                                                       App.setFetchConfig(filePath)
                                                   }
                                               })
        }
    }
    Connections {
        id:accountSettingsModelConnections
        // target: AccountSettingsModel

        onAccountLogout: {
            console.log("logouttttttttt")
            // noNetworkAlert= false;
            mainWindowLoader.setSource("Login.qml")
        }
        /*onFailedRegistration: {
            console.log("Fail register main credentials");
            mainWindowLoader.setSource("Login.qml",{"isErrorLabel": "true"})
        }*/
        onNetworkErrorFirstLogin:{
            console.log("Fail register main network");
            mainWindowLoader.setSource("Login.qml",{"noNetworkAlert": "true"})
        }
        onNetworkErrorLoggedIn:{
            noNetworkAlert= true
            console.log("Fail register main loggedd")
        }
        onRegistrationStateChanged:{
            if(AccountSettingsModel.registrationState===2){
                console.log("okkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk")
                ///mainWindowLoader.setSource("MainContent.qml")
                // noNetworkAlert= false;
            }
        }
        onIsLoggedInChanged:{
            mainWindowLoader.source= AccountSettingsModel.isLoggedIn ?"MainContent.qml": "Login.qml"
        }
    }

    Settings{
        category: "window"
        property alias x : mainwindow.x
        property alias y : mainwindow.y
        property alias width : mainwindow.width
        property alias height : mainwindow.height
    }

}
