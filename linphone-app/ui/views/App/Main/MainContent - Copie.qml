import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import Qt.labs.platform 1.0
import Qt.labs.settings 1.0
import Common 1.0
import Linphone 1.0
import Utils 1.0
import Units 1.0
import App.Styles 1.0
import ColorsList 1.0
import UtilsCpp 1.0

import 'MainContent.js' as Logic
import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================


Rectangle{
    function lockView (info) {
        Logic.lockView(info)
    }

    function unlockView () {
        Logic.unlockView()
    }

    function setView (view, props, callback) {
        Logic.setView(view, props, callback)
    }

    width: parent.width
    id:window
    property bool  noNetworkAlert:false
    property bool  showTimeline:true
    property int  menuWidth:500
    property string _currentView
    property var _lockedInfo
    property var contentLoader   : contentLoader
    property var timeLine: timeLine
    property SmartSearchBar mainSearchBar : (mainLoader.item ? mainLoader.item.mainSearchBar : null)
    property bool isVisibleTelKeypad: false
    // property alias mainLoaderRef: mainLoaderRef
    ColumnLayout {
        id: mainColumn
        readonly property alias contactsEntry: contactsEntry
        readonly property alias conferencesEntry: conferencesEntry
        width: parent.width
        height: parent.height
        Layout.fillHeight: true
        Layout.fillWidth: true

        readonly property alias contentLoader: contentLoader
        readonly property alias menu: menu

        readonly property alias timeline: timeline
        readonly property alias mainSearchBar: smartSearchBar

        spacing: -10
        // -----------------------------------------------------------------------


        // -----------------------------------------------------------------------
        // Toolbar .
        // -----------------------------------------------------------------------

        RowLayout{
            id:tToolbar
            width: parent.width
            Layout.fillWidth: true
            Layout.rightMargin: 10
            Layout.leftMargin: 10
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
                width:parent.width - 30
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
                onLaunchChat:{ console.log("xxxxxxxxxxxxxxxxxxxxxxxxxx: chat "+sipAddress); CallsListModel.launchChat( sipAddress,0 )}
                onLaunchSecureChat: CallsListModel.launchChat( sipAddress,1 )
                onLaunchVideoCall: CallsListModel.launchVideoCall(sipAddress, '')
            }



        }
        RowLayout{
            visible: ! InternetChecker.isNetworkReachable
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Rectangle {
                width: parent.width
                height: 50
                color: "gray"
                anchors.centerIn: parent
                Text {
                    color: "red"
                    id: name
                    text: qsTr("Aucune connexion réseau")
                }
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
            anchors.bottom: Qt.bottom
            // Main menu.
            ColumnLayout {
                Layout.alignment: Qt.AlignTop
                Layout.fillHeight: true
                height: parent.height
                id:leftPanel
                Layout.maximumWidth: menuWidth
                Layout.preferredWidth: menuWidth



                // Main menu.

                // History.
                Rectangle{

                    Text {
                        text:if(timeline !== null) timeline.firstItem.name
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

                                if( entry.selected){
                                    console.debug("Load conversation from entry selected on timeline ", entry.chatRoomModel)
                                     menu.defaultSelectedEntry=callsEntry
                                    window.setView('Conversation', {
                                                       chatRoomModel:entry.chatRoomModel
                                                   })

                                    showTimeline= true
                                    timeLine.visible= true
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

                        }
                    }


                    // Item to take up the remaining space
                    ApplicationMenu {
                        id: menu
                        z:1
                        //visible:false
                        defaultSelectedEntry: chatEntry

                        entryHeight: MainWindowStyle.menu.height
                        entryWidth: MainWindowStyle.menu.width

                        Rectangle{
                            height: 10;
                            width: parent.width
                            color: "white"
                        }


                        ApplicationMenuEntry {
                            id: chatEntry

                            icon: 'qrc:/assets/images/saylo_picto_message-01.png'
                            iconSize: 40                         
                            name: qsTr('Messagerie')
                            visible: true

                            onSelected: {
                                if (timeline.model.rowCount()>0){
                                    showTimeline=true
                                    menuWidth=500
                                    timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true

                                }
                            }
                            onClicked:{
                                if (timeline.model.rowCount()>0){
                                    menuWidth=500
                                    showTimeline=true

                                    timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true

                                }
                            }

                        }

                        ApplicationMenuEntry {
                            id: contactsEntry

                            icon: 'qrc:/assets/images/saylo_picto_contacts-01.png'
                            iconSize: 40                           
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
                            name: qsTr('Equipes')
                            visible: true

                            onSelected: {
                                showTimeline=false
                                menuWidth=250
                                //  timeline.model.unselectAll()
                                setView('Conferences')
                            }
                            onClicked:{
                                showTimeline=false
                                menuWidth=250
                                setView('Conferences')
                            }


                        }

                        ApplicationMenuEntry {
                            id: vocalmessagesEntry

                            icon: 'qrc:/assets/images/saylo_picto_messagerie_vocale.png'
                            iconSize: 40                            
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
                            name: qsTr('Enregistrements')
                            visible: true

                            onSelected: {
                                showTimeline=false
                                menuWidth=250
                                //  timeline.model.unselectAll()
                                setView('Recordings')
                            }
                            onClicked:{
                                showTimeline=false
                                menuWidth=250
                                setView('Recordings')
                            }


                        }

                        ApplicationMenuEntry {
                            id: selfCareWindowid

                            icon: 'qrc:/assets/images/saylo_picto_selfcare.png'
                            iconSize: 40

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
                        color:"#F4F4F4"

                    }

                }



                Rectangle {
                    anchors.top: menu.bottom
                    //Layout.fillHeight: true
                    height: contentLoader.height-menu.height-100
                    width:250
                    color:"#F4F4F4"

                }

                Button {
                    id: settingsButton
                    visible: true
                    Layout.alignment: Qt.AlignBottom | Qt.AlignLeft
                    anchors.leftMargin: 5
                    width: 250
                    height: 80
                    background: Rectangle {
                        color:settingsMouseArea.containsMouse? "#E9E9E9": "#F4F4F4"
                        width:MainWindowStyle.menu.width
                        height: 50
                    }

                    contentItem: Row {
                        spacing: 10
                        anchors.centerIn: parent
                        //anchors.verticalCenter: parent.verticalCenter
                        Text {
                            text: "\uf013" // Unicode pour l'icône de déconnexion FontAwesome
                            font.family: fontAwesome.name
                            font.pointSize:Units.dp * 11
                            color: "#000000"
                            anchors.verticalCenter: parent.verticalCenter
                        }
                        Text {
                            text: "Paramètres"
                            //font.family: defaultFont.name
                            font.pointSize:Units.dp * 11
                            color:  "#000000"
                        }
                    }



                    MouseArea {
                         id: settingsMouseArea
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
                    Layout.alignment: Qt.AlignBottom | Qt.AlignLeft
                    anchors.leftMargin: 5
                    anchors.bottomMargin: 5
                    width: 250

                    background: Rectangle {
                        color:logoutMousearea.containsMouse? "#E9E9E9": "#F4F4F4"
                        width:MainWindowStyle.menu.width
                        height: 90
                    }

                    contentItem: Row {
                        spacing: 10
                        anchors.centerIn: parent
                        //anchors.verticalCenter: parent.verticalCenter
                        Text {
                            text: "\uf2f5"
                            font.family: fontAwesome.name
                            font.pointSize:Units.dp * 11
                            color: "#000000"
                            anchors.verticalCenter: parent.verticalCenter
                        }
                        Text {
                            text: "Déconnexion"
                            font.pointSize:Units.dp * 11
                            color: "#000000"
                        }
                    }
                    MouseArea {
                         id: logoutMousearea
                        anchors.fill: parent
                        cursorShape: Qt.PointingHandCursor

                        onClicked: {
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
                    Component.onCompleted: {

                        if(timeline.model.rowCount()>0)
                            timeline.model.getFirstChatRoom(timeline.model.rowCount()).selected=true
                        else
                        {
                            setView('HistoryView')
                            menuWidth=250
                            showTimeline=false
                            menu.defaultSelectedEntry=callsEntry
                        }

                    }
                }
            }
        }

        Connections{
            target: InternetChecker
            onIsNetworkReachableChanged:{

            }
        }
    }
}

