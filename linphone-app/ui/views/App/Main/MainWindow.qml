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

    Component{

        id: testCompo
        //visible: true

        ColumnLayout {
            // Workaround to get these properties in `MainWindow.js`.
            readonly property alias contactsEntry: contactsEntry
            readonly property alias conferencesEntry: conferencesEntry
            height: parent.height
            Layout.fillHeight: true
            Layout.fillWidth: true

            readonly property alias contentLoader: contentLoader
            readonly property alias menu: menu

            readonly property alias timeline: timeline
            readonly property alias mainSearchBar: smartSearchBar

            spacing: -10
            // -----------------------------------------------------------------------

            //            AuthenticationNotifier {
            //                onAuthenticationRequested: Logic.handleAuthenticationRequested(authInfo, realm, sipAddress, userId)
            //            }

            RowLayout{
                visible: noNetworkAlert
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                Rectangle {
                    width: parent.width
                    height: 50
                    color: "gray"
                    //anchors.centerIn: parent
                    Text {
                        color: "red"
                        id: name
                        text: qsTr("Aucune connexion internet")
                        /// anchors.centerIn: parent
                    }
                }
            }

            // -----------------------------------------------------------------------
            // Toolbar .
            // -----------------------------------------------------------------------

            RowLayout{
                id:tToolbar
                visible: AccountSettingsModel.registrationState===0 || noNetworkAlert
                anchors.fill: parent
                Layout.fillWidth: true
                Layout.rightMargin: 10
                Layout.leftMargin: 10
                //anchors.left:
                //width:500
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                property alias mainSearchBar : smartSearchBar
                Layout.preferredHeight: 60

                ColumnLayout {

                    Layout.preferredWidth: MainWindowStyle.autoAnswerStatus.width
                    visible: SettingsModel.autoAnswerStatus

                    Icon {
                        icon: SettingsModel.autoAnswerStatus
                              ? 'auto_answer_custom'
                              : ''
                        iconSize: MainWindowStyle.autoAnswerStatus.iconSize
                        overwriteColor: MainWindowStyle.autoAnswerStatus.text.colorModel.color
                    }

                    Text {
                        clip: true
                        color: MainWindowStyle.autoAnswerStatus.text.colorModel.color
                        font {
                            bold: true
                            pointSize: MainWindowStyle.autoAnswerStatus.text.pointSize
                        }
                        text: qsTr('autoAnswerStatus')
                        visible: SettingsModel.autoAnswerStatus
                        width: parent.width
                    }
                }


                SmartSearchBar {
                    id: smartSearchBar

                    Layout.fillWidth: true
                    //width:patent.wdith-50
                    //width:500
                    anchors.horizontalCenter: parent.horizontalCenter
                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                    maxMenuHeight: MainWindowStyle.searchBox.maxHeight
                    placeholderText: qsTr('Rechercher, se rencontrer et appeler')
                    tooltipText: qsTr('Rechercher, se rencontrer et appeler')

                    onAddContact: window.setView('ContactEdit', {
                                                     sipAddress: sipAddress
                                                 })

                    onEntryClicked: {
                        if (SettingsModel.contactsEnabled) {
                            window.setView('ContactEdit', { sipAddress: entry.sipAddress })
                        } else {
                            CallsListModel.createChatRoom( '', false, [entry.sipAddress], true )
                        }
                    }

                    onLaunchCall: {console.log("xxxxxxxxxxxxxxxxxxxxxxxxxx: "+sipAddress); CallsListModel.launchAudioCall(sipAddress, '')}
                    onLaunchChat: CallsListModel.launchChat( sipAddress,0 )
                    onLaunchSecureChat: CallsListModel.launchChat( sipAddress,1 )
                    onLaunchVideoCall: CallsListModel.launchVideoCall(sipAddress, '')
                }



            }

            // -----------------------------------------------------------------------
            // Content.
            // -----------------------------------------------------------------------
            RowLayout {
                id:mainRow
                Layout.alignment: Qt.AlignTop
                Layout.fillHeight: true
                Layout.fillWidth: true
                height: parent.height
                //anchors.bottom: Qt.bottom
                // Main menu.
                ColumnLayout {
                    Layout.alignment: Qt.AlignTop
                    Layout.fillHeight: true
                    height: parent.height
                    id:leftPanel
                    visible: AccountSettingsModel.registrationState===0 || noNetworkAlert
                    Layout.maximumWidth: menuWidth
                    Layout.preferredWidth: menuWidth



                    // Main menu.

                    // History.
                    Rectangle{
                        Text {
                            text: timeline.firstItem.name
                            color: "black"
                            font.pointSize: 16
                        }
                        anchors.top: tToolbar.bottom
                        y:0
                        x:0
                        height: parent.height
                        Layout.fillHeight: true
                        width:250
                        color:red
                        Layout.fillWidth: true
                        Timeline {
                            id: timeline
                            anchors.left: menu.right
                            visible:showTimeline
                            width:250
                            height: contentLoader.height
                            Layout.fillHeight: true
                            model: TimelineProxyModel{
                                listSource: TimelineProxyModel.Main
                                onListSourceChanged: console.log("listSourceChanged")
                            }

                            onEntrySelected:{
                                if( entry ) {
                                    console.log("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ entry", entry.selected)

                                    if( entry.selected){
                                        console.debug("Load conversation from entry selected on timeline ", entry.chatRoomModel)
                                        window.setView('Conversation', {
                                                           chatRoomModel:entry.chatRoomModel
                                                       })
                                        //console.log("timelinesetitem0: "+entry.chatRoomModel.lastUpdateTime )
                                        //console.log("timelinesetitem: "+timeline.model.rowCount() )
                                        //console.log("timelinesetitem1: "+timeline.model.getFirstChatRoom(timeline.model.rowCount()).chatRoomModel.lastUpdateTime)
                                        //timeline.currentIndex = 15
                                    }
                                }else{
                                    console.log("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ else", entry.selected)
                                    window.setView('Home', {})
                                }
                                //menu.resetSelectedEntry()
                            }
                            onShowHistoryRequest: {
                                // timeline.model.unselectAll()
                                window.setView('HistoryView')
                            }

                            Component.onCompleted: {
                                console.log("ListView is completed")
                                // Alternative ways to verify that this code is running
                                //timeline.backgroundColor = "yellow" // Visual cue
                                //timeline.currentIndex = 0 // Select first item
                                //console.log("First item selected:")
                                //console.log("Component.onCompleted timeline : "+timeline.model.getFirstChatRoom(timeline.model.rowCount()).chatRoomModel.lastUpdateTime)

                            }
                        }


                        // Item to take up the remaining space
                        ApplicationMenu {
                            id: menu
                            z:1
                            //visible:false
                            defaultSelectedEntry: null

                            entryHeight: MainWindowStyle.menu.height
                            entryWidth: MainWindowStyle.menu.width

                            Rectangle{
                                height: 20;
                                width: parent.width
                                color: "#141B6C"
                            }
                            ApplicationMenuEntry {
                                id: chatEntry

                                icon: 'qrc:/assets/images/saylo_picto_message-01.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('Messagerie')
                                visible: true

                                onSelected: {
                                    if (timeline.model.rowCount()>0){
                                        showTimeline=true
                                        menuWidth=500
                                        // timeline.model.unselectAll()
                                        /* window.setView('Conversation', {
                                                       chatRoomModel:timeline.model.getFirstChatRoom(timeline.model.rowCount()).chatRoomModel
                                                   })
                                                   */
                                        timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true

                                    }
                                }
                                onClicked:{
                                    if (timeline.model.rowCount()>0){
                                        menuWidth=500
                                        showTimeline=true
                                        /* window.setView('Conversation', {
                                                       chatRoomModel:timeline.model.getFirstChatRoom(timeline.model.rowCount()).chatRoomModel
                                                   })
                                                   */
                                        timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true

                                    }
                                }

                            }

                            ApplicationMenuEntry {
                                id: contactsEntry

                                icon: 'qrc:/assets/images/saylo_picto_contacts-01.png'
                                iconSize: 40
                                overwriteColor:isSelected ? MainWindowStyle.menu.contacts.selectedColor.color : MainWindowStyle.menu.contacts.colorModel.color
                                name: LdapListModel.count > 0
                                //: 'Local contacts' : Contacts section label in main window when we have to specify that they are local to the application.
                                      ? qsTr('Contacts')
                                        //: 'Contacts' : Contacts section label in main waindow.
                                      : qsTr('Contacts')

                                visible: SettingsModel.contactsEnabled

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    ContactsListModel.update()
                                    //  timeline.model.unselectAll()
                                    setView('Contacts')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    ContactsListModel.update()
                                    setView('Contacts')
                                }

                            }

                            ApplicationMenuEntry {
                                id: conferencesEntry

                                icon: MainWindowStyle.menu.conferences.icon
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('reunions').toUpperCase()
                                visible: false

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //   timeline.model.unselectAll()
                                    setView('Conferences')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('Conferences')
                                }

                            }

                            ApplicationMenuEntry {
                                id: callsEntry

                                icon: 'qrc:/assets/images/saylo_picto_appels-01.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('Appels')
                                visible: true

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //   timeline.model.unselectAll()
                                    setView('HistoryView')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('HistoryView')
                                }


                            }

                            ApplicationMenuEntry {
                                id: teamsEntry

                                icon: 'qrc:/assets/images/saylo_picto_equipes.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('Equipes')
                                visible: true

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //  timeline.model.unselectAll()
                                    setView('GroupChatList')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('GroupChatList')
                                }


                            }

                            ApplicationMenuEntry {
                                id: vocalmessagesEntry

                                icon: 'qrc:/assets/images/saylo_picto_messagerie_vocale.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('Messagerie Vocale')
                                visible: true

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //  timeline.model.unselectAll()
                                    setView('VocalMessages')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('VocalMessages')
                                }


                            }

                            ApplicationMenuEntry {
                                id: recordsEntry

                                icon: 'qrc:/assets/images/saylo_picto_enregistrement-01.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('Enregistrements')
                                visible: true

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //  timeline.model.unselectAll()
                                    setView('Recordings')
                                    //Logic.updateSelectedEntry()
                                    //CoreManager.forceRefreshRegisters()
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('Recordings')
                                    //Logic.updateSelectedEntry()
                                    //CoreManager.forceRefreshRegisters()
                                }


                            }

                            ApplicationMenuEntry {
                                id: selfCareWindowid

                                icon: 'qrc:/assets/images/saylo_picto_selfcare.png'
                                iconSize: 40
                                overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                                name: qsTr('SelfCare')
                                visible: true

                                onSelected: {
                                    showTimeline=false
                                    menuWidth=250
                                    //timeline.model.unselectAll()
                                    setView('qrc:/ui/views/App/SelfCare/SelfCareWindow')
                                }
                                onClicked:{
                                    showTimeline=false
                                    menuWidth=250
                                    setView('qrc:/ui/views/App/SelfCare/SelfCareWindow')
                                }


                            }



                        }


                        Rectangle {
                            z:10
                            anchors.right: timeline.left
                            anchors.top: menu.bottom
                            width: 250
                            height: contentLoader.height-40
                            //Layout.fillHeight: true
                            color:"#141B6C"
                            // Fixer les marges à zéro
                            //anchors.bottomMargin: 20
                        }

                    }



                    Rectangle {
                        anchors.top: menu.bottom
                        //Layout.fillHeight: true
                        height: contentLoader.height-menu.height-200
                        // anchors.topMargin: -80
                        width:250
                        color:"#141B6C"
                        // Fixer les marges à zéro

                    }

                    Button {
                        id: settingsButton
                        visible: true
                        anchors.margins: 0
                        Layout.alignment: Qt.AlignBottom | Qt.AlignLeft
                        anchors.leftMargin: 5
                        width: 250
                        background: Rectangle {
                            color: "#141B6C"
                            width:MainWindowStyle.menu.width
                        }

                        contentItem: Row {
                            spacing: 10
                            anchors.centerIn: parent
                            //anchors.verticalCenter: parent.verticalCenter
                            Text {
                                text: "\uf013" // Unicode pour l'icône de déconnexion FontAwesome
                                font.family: fontAwesome.name
                                font.pixelSize: 16
                                color: "#20E8E4"
                                anchors.verticalCenter: parent.verticalCenter
                            }
                            Text {
                                text: "Paramètres"
                                //font.family: defaultFont.name
                                font.pixelSize: 16
                                color: "white"
                            }
                        }



                        MouseArea {
                            anchors.fill: parent
                            cursorShape: Qt.PointingHandCursor

                            onClicked: {

                                // Ajoutez ici votre logique de déconnexion
                                App.smartShowWindow(App.getSettingsWindow());
                            }
                        }
                    }

                    Button {
                        id: logoutButton
                        visible: true
                        anchors.margins: 0
                        Layout.alignment: Qt.AlignBottom | Qt.AlignLeft
                        anchors.leftMargin: 5
                        width: 250
                        background: Rectangle {
                            color: "#141B6C"
                            width:MainWindowStyle.menu.width
                        }

                        contentItem: Row {
                            spacing: 10
                            anchors.centerIn: parent
                            //anchors.verticalCenter: parent.verticalCenter
                            Text {
                                text: "\uf2f5" // Unicode pour l'icône de déconnexion FontAwesome
                                font.family: fontAwesome.name
                                font.pixelSize: 16
                                color: "#20E8E4"
                                anchors.verticalCenter: parent.verticalCenter
                            }
                            Text {
                                text: "Déconnexion"
                                //font.family: defaultFont.name
                                font.pixelSize: 16
                                color: "white"
                            }
                        }


                        /*Item {
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                        Rectangle{
                            z:-1
                            anchors.fill: parent
                            color:"#141B6C"
                        }

                    }*/





                        // Bouton de déconnexion en bas à gauche


                        MouseArea {
                            anchors.fill: parent
                            cursorShape: Qt.PointingHandCursor

                            onClicked: {

                                // Ajoutez ici votre logique de déconnexion
                                AccountSettingsModel.logout()
                            }
                        }
                    }

                }

                // Main content.
                Item{

                    id: test
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    visible: true
                    Loader {
                        id: contentLoader

                        objectName: '__contentLoader'

                        anchors.fill: parent
                        source:AccountSettingsModel.registrationState===0 || noNetworkAlert? showTimeline && timeline.model.rowCount()>0?

                                                                                                  loadChatView() :loadHistoryView()  :'Login.qml'


                    }
                    Connections {
                        target: AccountSettingsModel

                        onAccountLogout: {
                            console.log("logouttttttttt")
                            noNetworkAlert= false;
                            contentLoader.setSource("Login.qml")
                        }
                        onFailedRegistration: {
                            console.log("Fail register main credentials");
                            contentLoader.setSource("Login.qml",{"isErrorLabel": "true"})
                        }
                        onNetworkErrorFirstLogin:{
                            console.log("Fail register main network");
                            contentLoader.setSource("Login.qml",{"noNetworkAlert": "true"})
                        }
                        onNetworkErrorLoggedIn:{
                            noNetworkAlert= true
                            console.log("Fail register main loggedd")
                        }
                        onRegistrationStateChanged:{
                            if(AccountSettingsModel.registrationState===2){
                                noNetworkAlert= false;
                            }
                        }
                    }
                    Component.onCompleted: {

                        // console.log("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ",timeline.model.getFirstChatRoom(timeline.model.rowCount()))
                        //  timeline.model.getFirstChatRoom(3).selected=true

                        // timeline.entrySelected(timeline.model.getFirstChatRoom(3))
                    }


                }



                function hideTelKeypad(){
                    if (!telKeypad.containsMouse) {
                        // telKeypad.visible = false;
                    }
                }
            }

            function loadChatView(){


                if(!window._currentView || window._currentView=="Home"){

                    timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true
                    chatEntry.select()
                }

            }

            function loadHistoryView(){


                if(!window._currentView || window._currentView=="Home"){

                    //menu.defaultSelectedEntry= callsEntry
                    // menu.resetSelectedEntry()
                    setView('HistoryView')
                    //setView('Home', {})
                    menuWidth=250
                    showTimeline=false
                    console.log("current view 5 "+ ("Home"=="Home"))
                    callsEntry.select()
                    menu._selected=callsEntry

                    // var foundElement = testCompo.findChild("callsEntry")
                    //console.log("current view 555 "+ foundElement)


                    console.log("current view 6 "+ mainLoader.item.ApplicationMenu)
                    //mainLoader.item.callsEntry.select()
                    //Logic.updateSelectedEntry()
                }

            }



        }

    }


    Loader{
        id: customMenuBar
        active:Qt.platform.os === 'osx'
        sourceComponent:MainWindowTopMenuBar{
            onDisplayRecordings: {
                if(mainLoader.item)
                    mainLoader.item.timeline.model.unselectAll()
                setView('Recordings')
            }
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
