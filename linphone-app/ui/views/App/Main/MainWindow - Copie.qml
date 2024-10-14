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
    id: window

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

          //  mainLoader.source= AccountSettingsModel.isLoggedIn ?"MainContent.qml": "Login.qml"
            mainLoader.active = true
          //  accountSettingsModelConnections.target= AccountSettingsModel


        }
    }



    Shortcut {
        sequence: StandardKey.Close
        onActivated: window.hide()
    }
    // ---------------------------------------------------------------------------




    // ---------------------------------------------------------------------------
    Loader {
        id: mainLoader

        active: false
        anchors.fill: parent
        source: "Login.qml"
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
                if(mainLoader.item)
                    mainLoader.item.timeline.model.unselectAll()
                setView('Recordings')
            }*/
        }

    }

    /*Component.onCompleted:{

        console.log("rowcount0: ")
        console.log("rowcount: "+timeline.model.rowCount())
        if(Qt.platform.os === 'osx') menuBar = customMenuBar;
        /* window.setView('Conversation', {
                           chatRoomModel:timeline.model.getFirstChatRoom(timeline.model.rowCount()).chatRoomModel

                       })

        //console.log("timelinesetitem: "+timeline.model.rowCount() )
        //timeline.currentIndex = 15

    }*/
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
            mainwindow.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
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
   /* Connections {
        id:accountSettingsModelConnections
       // target: AccountSettingsModel

        onAccountLogout: {
            console.log("logouttttttttt")
           // noNetworkAlert= false;
            mainLoader.setSource("Login.qml")
        }
        onFailedRegistration: {
            console.log("Fail register main credentials");
            mainLoader.setSource("Login.qml",{"isErrorLabel": "true"})
        }
        onNetworkErrorFirstLogin:{
            console.log("Fail register main network");
            mainLoader.setSource("Login.qml",{"noNetworkAlert": "true"})
        }
        onNetworkErrorLoggedIn:{
            noNetworkAlert= true
            console.log("Fail register main loggedd")
        }
        onRegistrationStateChanged:{
            if(AccountSettingsModel.registrationState===2){
                console.log("okkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk")
                mainLoader.setSource("MainContent.qml")
               // noNetworkAlert= false;
            }
        }
        onIsLoggedInChanged:{
            console.log("Changeeeeeeeeeeeeeeeeeeeeee ",AccountSettingsModel.isLoggedIn )
        }
    }*/

    Settings{
        category: "window"
        property alias x : window.x
        property alias y : window.y
        property alias width : window.width
        property alias height : window.height
    }

}
