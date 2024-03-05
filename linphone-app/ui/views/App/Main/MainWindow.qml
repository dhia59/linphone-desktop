import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import Qt.labs.platform 1.0

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

    property string _currentView
    property var _lockedInfo
    property SmartSearchBar mainSearchBar : (mainLoader.item ? mainLoader.item.mainSearchBar : null)
    property bool isVisibleTelKeypad: false
    // ---------------------------------------------------------------------------

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

    minimumHeight: MainWindowStyle.minimumHeight
    minimumWidth: MainWindowStyle.minimumWidth

    title: Utils.capitalizeFirstLetter(applicationName)

    // ---------------------------------------------------------------------------

    onActiveFocusItemChanged: Logic.handleActiveFocusItemChanged(activeFocusItem)
    onClosing: Logic.handleClosing(close)

    // ---------------------------------------------------------------------------

    Connections {
        target: CoreManager
        onCoreManagerInitialized: {
                mainLoader.active = true
        }
    }

    Shortcut {
        sequence: StandardKey.Close
        onActivated: window.hide()
    }
    // ---------------------------------------------------------------------------

    Loader {
        id: mainLoader

        active: false
        anchors.fill: parent
        sourceComponent: testCompo
    }

    Component{
        id: testCompo
        //visible: true
       ColumnLayout {
            // Workaround to get these properties in `MainWindow.js`.
            readonly property alias contactsEntry: contactsEntry
            readonly property alias conferencesEntry: conferencesEntry

            readonly property alias contentLoader: contentLoader
            readonly property alias menu: menu

            readonly property alias timeline: timeline
            readonly property alias mainSearchBar: toolBar.mainSearchBar

            spacing: 0
            // -----------------------------------------------------------------------

//            AuthenticationNotifier {
//                onAuthenticationRequested: Logic.handleAuthenticationRequested(authInfo, realm, sipAddress, userId)
//            }

            // -----------------------------------------------------------------------
            // Toolbar properties.
            // -----------------------------------------------------------------------

            ToolBar {
                id: toolBar
                property alias mainSearchBar : smartSearchBar
                visible: AccountSettingsModel.registrationState===0
                Layout.fillWidth: true
                Layout.preferredHeight: MainWindowStyle.toolBar.height
                hoverEnabled : true
                background: MainWindowStyle.toolBar.background

                RowLayout {
                    anchors {
                        fill: parent
                        leftMargin: MainWindowStyle.toolBar.leftMargin
                        rightMargin: MainWindowStyle.toolBar.rightMargin
                    }
                    spacing: MainWindowStyle.toolBar.spacing

                    ApplicationMenu {
                        id: menu
                        x:0

                        defaultSelectedEntry: null

                        entryHeight: MainWindowStyle.menu.height
                        entryWidth: MainWindowStyle.menu.width

                        ApplicationMenuEntry {
                            id: contactsEntry

                            icon: MainWindowStyle.menu.contacts.icon
                            iconSize: MainWindowStyle.menu.contacts.iconSize
                            overwriteColor:isSelected ? MainWindowStyle.menu.contacts.selectedColor.color : MainWindowStyle.menu.contacts.colorModel.color
                            name: LdapListModel.count > 0
                            //: 'Local contacts' : Contacts section label in main window when we have to specify that they are local to the application.
                                  ? qsTr('localContactsEntry').toUpperCase()
                            //: 'Contacts' : Contacts section label in main waindow.
                                                            : qsTr('contactsEntry').toUpperCase()

                            visible: SettingsModel.contactsEnabled

                            onSelected: {
                                ContactsListModel.update()
                                timeline.model.unselectAll()
                                setView('Contacts')
                            }
                            onClicked:{
                                ContactsListModel.update()
                                setView('Contacts')
                            }
                            Icon{
                                anchors.right:parent.right
                                anchors.verticalCenter: parent.verticalCenter
                                anchors.rightMargin: 10
                                icon: MainWindowStyle.menu.direction.icon
                                overwriteColor:contactsEntry.overwriteColor //MainWindowStyle.menu.contacts.colorModel.color
                                iconSize: MainWindowStyle.menu.direction.iconSize

                            }
                        }

                        ApplicationMenuEntry {
                            id: conferencesEntry

                            icon: MainWindowStyle.menu.conferences.icon
                            iconSize: MainWindowStyle.menu.conferences.iconSize
                            overwriteColor: isSelected ? MainWindowStyle.menu.conferences.selectedColor.color : MainWindowStyle.menu.conferences.colorModel.color
                            name: qsTr('mainWindowConferencesTitle').toUpperCase()
                            visible: SettingsModel.videoConferenceEnabled && SettingsModel.conferenceEnabled

                            onSelected: {
                                timeline.model.unselectAll()
                                setView('Conferences')
                            }
                            onClicked:{
                                setView('Conferences')
                            }
                            Icon{
                                anchors.right:parent.right
                                anchors.verticalCenter: parent.verticalCenter
                                anchors.rightMargin: 10
                                icon: MainWindowStyle.menu.direction.icon
                                overwriteColor: conferencesEntry.overwriteColor
                                iconSize: MainWindowStyle.menu.direction.iconSize
                            }
                        }
                    }
                    ActionButton {
                        id: telkeypadButton
                        isCustom: true
                        x: 270
                        y:-15
                        backgroundRadius: 90
                        colorSet: MainWindowStyle.buttons.telKeyad
                        onClicked:popup.open()//toggled ? telKeypad.close() : telKeypad.open() //telKeypad.visible = !telKeypad.visible
                        toggled: telKeypad.visible

                    }
                    Popup {
                            id: popup
                            x:100
                            y: 50
                            width: 200
                            height: 100
                         //   modal: true


                            Rectangle {
                                width: parent.width-50
                                height: parent.height-50
                                color:Qt.rgba(0, 0, 0, 0)
                                 border.color: "transparent"
                                 border.width: 0
                                TelKeypad {
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    id: telKeypad
                                    onSendDtmf: smartSearchBar.text += dtmf
                                    visible:true//SettingsModel.showTelKeypadAutomatically
                                    onVisibleChanged: isVisibleTelKeypad= visible
                                    //onTarget: {telKeypad.containsMouse= true;console.log('testtttttttttttttttttttt', telKeypad.containsMouse)}
                                }
                            }
                        }

//                    ActionButton {
//                        id: home
//                        isCustom: true
//                        backgroundRadius: 4
//                        colorSet: MainWindowStyle.buttons.home
//                        //: 'Open Home' : Tooltip for a button that open the home view
//                        tooltipText : qsTr('openHome')
//                        //autoIcon: true
//                        onClicked: setView('Home')
//                    }

                    /*AccountStatus {
                        id: accountStatus
                        betterIcon:true
                        Layout.preferredHeight: parent.height
                        Layout.preferredWidth: MainWindowStyle.accountStatus.width
                        Layout.fillWidth: false

                        TooltipArea {
                           text: UtilsCpp.toDisplayString(AccountSettingsModel.sipAddress, SettingsModel.sipDisplayMode)
                            hoveringCursor: Qt.PointingHandCursor
                        }

                        onClicked:  {
                            CoreManager.forceRefreshRegisters()
                            Logic.manageAccounts()
                        }
                    }*/

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

                        maxMenuHeight: MainWindowStyle.searchBox.maxHeight
                        placeholderText: qsTr('mainSearchBarPlaceholder')
                        tooltipText: qsTr('smartSearchBarTooltip')
                        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

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

                        onLaunchCall: CallsListModel.launchAudioCall(sipAddress, '')
                        onLaunchChat: CallsListModel.launchChat( sipAddress,0 )
                        onLaunchSecureChat: CallsListModel.launchChat( sipAddress,1 )
                        onLaunchVideoCall: CallsListModel.launchVideoCall(sipAddress, '')
                    }


                    ActionButton {
                        isCustom: true
                        backgroundRadius: 4
                        colorSet: MainWindowStyle.buttons.burgerMenu
                        visible: Qt.platform.os !== 'osx'

                        toggled: menuBar.isOpenned
                        onClicked: toggled ? menuBar.close() : menuBar.open()// a bit useless as Menu will depopup on losing focus but this code is kept for giving idea
                        MainWindowMenuBar {
                            id: menuBar
                            onDisplayRecordings: {
                                timeline.model.unselectAll()
                                setView('Recordings')
                            }
                        }
                    }
                }
            }

            // -----------------------------------------------------------------------
            // Content.
            // -----------------------------------------------------------------------

            RowLayout {
                Layout.fillHeight: true
                Layout.fillWidth: true
                id:mainRow
                spacing: 0

                // Main menu.
                ColumnLayout {
                    id:leftPanel
                    visible: AccountSettingsModel.registrationState===0
                    Layout.maximumWidth: MainWindowStyle.menu.width
                    Layout.preferredWidth: MainWindowStyle.menu.width

                    spacing: 0


                    // History.
                    Timeline {
                        id: timeline

                        Layout.fillHeight: true
                        Layout.fillWidth: true
                        model: TimelineProxyModel{
                            listSource: TimelineProxyModel.Main
                            onListSourceChanged: console.log("listSourceChanged")
                        }

                        onEntrySelected:{
                            if( entry ) {
                                if( entry.selected){
                                    console.debug("Load conversation from entry selected on timeline")
                                    window.setView('Conversation', {
                                                chatRoomModel:entry.chatRoomModel
                                               })
                                }
                            }else{

                                window.setView('Home', {})
                            }
                            menu.resetSelectedEntry()
                        }
                        onShowHistoryRequest: {
                            timeline.model.unselectAll()
                            window.setView('HistoryView')
                        }
                    }
                }

                // Main content.
                Item{
                    id: test
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    Loader {
                        id: contentLoader

                        objectName: '__contentLoader'

                        anchors.fill: parent

                        source:AccountSettingsModel.registrationState===0? 'Home.qml' :'Login.qml'
                    }
//                    TelKeypad {
//                        anchors.right: parent.right
//                        anchors.top: parent.top
//                        id: telKeypad
//                        onSendDtmf: smartSearchBar.text += dtmf
//                        visible:SettingsModel.showTelKeypadAutomatically
//                        onVisibleChanged: isVisibleTelKeypad= visible
//                        //onTarget: {telKeypad.containsMouse= true;console.log('testtttttttttttttttttttt', telKeypad.containsMouse)}
//                    }



                    Connections {
                        target: AccountSettingsModel

                        onAccountLogout: {
                             contentLoader.setSource("Login.qml")
                         }
                        }
                    Connections {
                        target: AccountSettingsModel
                        onFailedRegistration: {
                            console.log("Fail register main");
                            contentLoader.setSource("Login.qml",{"isErrorLabel": "true"})
                        }
                    }

                    }
                function hideTelKeypad(){
                    if (!telKeypad.containsMouse) {
                       // telKeypad.visible = false;
                    }
                  }
                }

//            MouseArea {
//                   anchors.fill: parent
//                   visible: isVisibleTelKeypad
//                   onClicked: {
//                       mainRow.hideTelKeypad()
//                   }
//               }

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

    Component.onCompleted: if(Qt.platform.os === 'osx') menuBar = customMenuBar
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
            window.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
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
}
