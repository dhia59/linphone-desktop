import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.3

import Common 1.0
import Linphone 1.0
import Linphone.Styles 1.0

import UtilsCpp 1.0
import LinphoneEnums 1.0

import App.Styles 1.0

import 'ContactEdit.js' as Logic

// =============================================================================

ColumnLayout  {
    id: contactEdit
    property string sipAddress
    property string contactType
    readonly property alias vcard: contactEdit._vcard
    property string sipAddressesValue: ""
    property bool _edition: false
    property var _contact
    property var _vcard

    /*Image {
                 source: "qrc:/assets/images/appBackground.png"
                 anchors.fill: parent
                 fillMode: Image.PreserveAspectCrop

             }*/

    // ---------------------------------------------------------------------------

    spacing: 0
    Component.onDestruction: {_vcard=null}// Need to set it to null because of not calling destructor if not.
    Component.onCompleted:{
        var sipAddress = contactEdit.sipAddress
        var contact = contactEdit._contact = ContactsListModel.getContactModelFromAddress(sipAddress)

        if (!contact) {
            // Add a new contact.
            var vcard = CoreManager.createDetachedVcardModel()

            if (sipAddress && sipAddress.length > 0) {
                vcard.addSipAddress(sipAddress)
                vcard.username = UtilsCpp.getDisplayName(SipAddressesModel.getSipAddressObserver(sipAddress, sipAddress).peerAddress)
            }else{
                vcard.username = ' '// Username initialization to avoid Belr parsing issue when setting new name
            }

            contactEdit._vcard = vcard
            contactEdit._edition = true
        } else {

            if(sipAddressesValue!==""){
                sipAddressesValue= sipAddress.split("@")[0].replace("sip:","")
            }
            contactEdit._vcard = contact.vcard
        }
    }

    onVcardChanged:Logic.handleVcardChanged(vcard)

    // ---------------------------------------------------------------------------

    Loader {
        active: contactEdit._contact != null
        sourceComponent: Connections {
            target: contactEdit._contact

            onContactUpdated: Logic.handleContactUpdated()
        }
        Component.onCompleted: {

        }
    }

    FileDialog {
        id: avatarChooser

        folder: shortcuts.home
        title: qsTr('avatarChooserTitle')

        onAccepted: Logic.setAvatar(fileUrls[0])
    }

    // ---------------------------------------------------------------------------
    // Info bar.
    // ---------------------------------------------------------------------------

    Rectangle {
        id: infoBar

        Layout.fillWidth: true
        Layout.preferredHeight: ContactEditStyle.bar.height
        color: '#e7e7e7'

        RowLayout {
            anchors {
                fill: parent
                leftMargin: ContactEditStyle.bar.leftMargin
                rightMargin: ContactEditStyle.bar.rightMargin
            }

            spacing: ContactEditStyle.bar.spacing

            ActionButton {
                isCustom: true
                backgroundRadius: 90
                colorSet: ContactEditStyle.bar.avatarTakePicture
                enabled: _edition

                onClicked: avatarChooser.open()

                Avatar {
                    id: avatar

                    anchors.fill: parent
                    image: _vcard ? _vcard.avatar : ''
                    username: _vcard ? _vcard.username : ''
                    presenceLevel: _contact ? _contact.presenceLevel : -1
                    presenceTimestamp: _contact && _contact.presenceTimestamp
                    visible: (isLoaded() && !parent.hovered) || !_edition
                }
            }

            TransparentTextInput {
                id: usernameInput

                Layout.fillWidth: true
                Layout.preferredHeight: ContactEditStyle.bar.buttons.size

                color: ContactEditStyle.bar.username.colorModel.color

                font {
                    bold: true
                    pointSize: ContactEditStyle.bar.username.pointSize
                }
                forceFocus: true
                readOnly: !_edition
                text: avatar.username
                //: 'Display Name' : placeholder for setting display name on a contact
                placeholder: qsTr('displayName')
                font.family: SettingsModel.textMessageFont.family

                onEditingFinished: Logic.setUsername(text)
                onReadOnlyChanged: {
                    if (!readOnly) {
                        forceActiveFocus()
                    }
                }
            }

            Row {
                Layout.alignment: Qt.AlignRight
                Layout.fillHeight: true

                spacing: ContactEditStyle.bar.actions.spacing
                visible: _contact != null

                ActionBar {
                    id: actionBar
                    anchors.verticalCenter: parent.verticalCenter
                    iconSize: ContactEditStyle.bar.actions.history.iconSize

                    ActionButton {
                        isCustom: true
                        backgroundRadius: 90
                        colorSet: ContactEditStyle.videoCall

                        visible: SettingsModel.videoAvailable && SettingsModel.outgoingCallsEnabled && SettingsModel.showStartVideoCallButton

                        onClicked: sipAddressesMenu.open(sipAddressesMenu.startVideoCall)
                    }

                    ActionButton {
                        isCustom: true
                        backgroundRadius: 90
                        colorSet: ContactEditStyle.call

                        visible: SettingsModel.outgoingCallsEnabled

                        onClicked: sipAddressesMenu.open(sipAddressesMenu.startCall)
                    }
                    ActionButton {
                        isCustom: true
                        backgroundRadius: 90
                        colorSet: SettingsModel.getShowStartChatButton() ? ContactEditStyle.chat : ContactEditStyle.history
                        visible: SettingsModel.standardChatEnabled
                        onClicked: sipAddressesMenu.open(sipAddressesMenu.createChatRoom)
                        tooltipText: qsTr('tooltipShowConversation')
                        tooltipIsClickable: false
                    }

                    ActionButton {
                        isCustom: true
                        backgroundRadius: 90
                        colorSet: SettingsModel.getShowStartChatButton() ? ContactEditStyle.chat : ContactEditStyle.history
                        visible: SettingsModel.secureChatEnabled
                        enabled: AccountSettingsModel.conferenceUri != ''
                        Icon{
                            icon:'secure_level_1'
                            iconSize:parent.height/2
                            anchors.top:parent.top
                            anchors.horizontalCenter: parent.right
                        }
                        onClicked: {sipAddressesMenu.open(sipAddressesMenu.createSecureChatRoom)}

                        tooltipMaxWidth: actionBar.width
                        tooltipVisible: AccountSettingsModel.conferenceUri == ''
                        //: 'You need to set the conference URI in your account settings to create a conference based chat room.' : Tooltip to warn the user that a setting is missing in its configuration.
                        tooltipText: '- ' + qsTr('missingConferenceURI') + '\n'
                    }
                }


            }
        }
    }

    // ---------------------------------------------------------------------------

    SipAddressesMenu {
        id: sipAddressesMenu

        relativeTo: infoBar
        relativeX: infoBar.width - SipAddressesMenuStyle.entry.width
        relativeY: infoBar.height

        sipAddresses: _contact ? _contact.vcard.sipAddresses : [ contactEdit.sipAddress ]

        function viewConversation(chatRoomModel){
            if( chatRoomModel && !chatRoomModel.updating){
                window.setView('Conversation', {
                                   chatRoomModel:chatRoomModel
                               }, function(){
                                   TimelineListModel.select(chatRoomModel)
                               })
            }
        }

        function createChatRoom(sipAddress){
            var entry = CallsListModel.createChatRoom( "", false, [sipAddress], false )
            if(entry)
                viewConversation(entry.chatRoomModel)
        }
        function createSecureChatRoom(sipAddress){
            var entry = CallsListModel.createChatRoom( "", true, [sipAddress], false )
            if(entry)
                viewConversation(entry.chatRoomModel)
        }
        function startCall(sipAddress){
            CallsListModel.launchAudioCall([sipAddress])
        }
        function startVideoCall(sipAddress){
            CallsListModel.launchVideoCall([sipAddress])
        }
    }

    // ---------------------------------------------------------------------------
    // Info list.
    // ---------------------------------------------------------------------------

    Rectangle {
        Layout.fillHeight: true
        Layout.fillWidth: true
        Rectangle{
            anchors.centerIn: parent

            height: 300
            width: 300
            Image {
                source: "qrc:/assets/images/appBackground.png"
                anchors.fill: parent
                fillMode: Image.PreserveAspectCrop

            }
        }
        color: ContactEditStyle.content.colorModel.color

        Flickable {
            id: flick

            ScrollBar.vertical: ForceScrollBar {
                contentSizeTarget: flick.contentHeight
                sizeTarget: flick.height
                Component.onCompleted: updatePolicy()
            }

            anchors.fill: parent
            boundsBehavior: Flickable.StopAtBounds
            clip: true
            contentHeight: infoList.height
            contentWidth: width - ScrollBar.vertical.width
            flickableDirection: Flickable.VerticalFlick

            // -----------------------------------------------------------------------

            ColumnLayout {
                id: infoList

                width: flick.contentWidth

                ListForm {
                    id: addresses

                    Layout.leftMargin: ContactEditStyle.values.leftMargin
                    Layout.rightMargin: ContactEditStyle.values.rightMargin
                    Layout.topMargin: 50
                    Layout.fillWidth: true
                    tcolor:'#20E8E4'
                    minValues: _contact ? 1 : 0
                    placeholder: qsTr('Numéro de contact ')
                    readOnly: !_edition
                    title: "Numéro"
                    maxValues:1
                    onChanged: {
                        sipAddressesValue= newValue
                        /* console.log("ollllllllllllllld ", addresses.value)
                        console.log("newwwwwwwwwwwww ", newValue)
                        Logic.handleSipAddressChanged(addresses, index, oldValue, newValue)*/
                    }
                    //onRemoved: _vcard.removeSipAddress(value)
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: ContactEditStyle.values.separator.height
                    color: '#a3a2b8'
                }

                ListForm {
                    id: companies
                    tcolor:'#20E8E4'

                    Layout.leftMargin: ContactEditStyle.values.leftMargin
                    Layout.rightMargin: ContactEditStyle.values.rightMargin
                    Layout.topMargin: 30

                    placeholder: qsTr('companiesPlaceholder')
                    readOnly: !_edition
                    title: qsTr('companies')

                    onChanged: Logic.handleCompanyChanged(companies, index, oldValue, newValue)
                    onRemoved: _vcard.removeCompany(value)
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: ContactEditStyle.values.separator.height
                    color: '#a3a2b8'
                }

                ListForm {
                    id: emails
                    tcolor:'#20E8E4'

                    Layout.leftMargin: ContactEditStyle.values.leftMargin
                    Layout.rightMargin: ContactEditStyle.values.rightMargin
                    Layout.topMargin: 30

                    placeholder: qsTr('emailsPlaceholder')
                    readOnly: !_edition
                    title: qsTr('emails')

                    onChanged: Logic.handleEmailChanged(emails, index, oldValue, newValue)
                    onRemoved: _vcard.removeEmail(value)
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: ContactEditStyle.values.separator.height
                    color: '#a3a2b8'
                }

                ListForm {
                    id: urls
                    tcolor:'#20E8E4'

                    Layout.leftMargin: ContactEditStyle.values.leftMargin
                    Layout.rightMargin: ContactEditStyle.values.rightMargin
                    Layout.topMargin: 30

                    placeholder: qsTr('webSitesPlaceholder')
                    readOnly: !_edition
                    title: qsTr('webSites')

                    onChanged: Logic.handleUrlChanged(urls, index, oldValue, newValue)
                    onRemoved: _vcard.removeUrl(value)
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: ContactEditStyle.values.separator.height
                    color: '#a3a2b8'
                }

                StaticListForm {
                    Layout.leftMargin: ContactEditStyle.values.leftMargin
                    Layout.rightMargin: ContactEditStyle.values.rightMargin
                    Layout.topMargin: 30
                    tcolor:'#20E8E4'
                    isrow:true
                    fields: Logic.buildAddressFields()

                    readOnly: !_edition
                    title: qsTr('address')

                    onChanged: {

                        Logic.handleAddressChanged(index, value)
                    }
                }

                // ---------------------------------------------------------------------
                // Edition buttons.
                // ---------------------------------------------------------------------

                Row {
                    Layout.alignment: Qt.AlignHCenter
                    Layout.bottomMargin: ContactEditStyle.values.bottomMargin
                    Layout.topMargin: ContactEditStyle.buttons.topMargin

                    spacing: ContactEditStyle.buttons.spacing
                    visible: _edition

                    TextButtonA {
                        text: qsTr('cancel')
                        onClicked: Logic.cancel()
                    }

                    TextButtonB {
                        enabled: usernameInput.text.length > 0 && _vcard && addresses.count > 0
                        text: qsTr('save')
                        onClicked: Logic.save()
                    }
                }
            }
        }
    }


    Rectangle {

        Layout.fillWidth: true
        Layout.preferredHeight: ContactEditStyle.bar.height

        RowLayout {
            anchors {
                fill: parent
                leftMargin: ContactEditStyle.bar.leftMargin
                rightMargin: ContactEditStyle.bar.rightMargin
            }

            spacing: ContactEditStyle.bar.spacing

            Layout.alignment: Qt.AlignJustify
            //Layout.fillHeight: true

            visible: _contact != null


            ActionBar {
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                spacing:50
                ActionButton {
                    isCustom: true
                    backgroundRadius: 4
                    colorSet: ContactEditStyle.bar.actions.edit.colorSet
                    staticIconB:'qrc:/assets/images/contact_edit_custom.svg'

                    visible: !_edition && (contactType ==='personnel' || contactType ==='')
                    onClicked: Logic.editContact()
                }

                ActionButton {
                    isCustom: true
                    backgroundRadius: 4
                    colorSet: ContactEditStyle.bar.actions.del.colorSet
                    staticIconB:'qrc:/assets/images/contact_delete_custom.svg'
                    onClicked: Logic.removeContact()
                    visible: !_edition && (contactType ==='personnel' || contactType ==='')
                }
            }

        }
    }

}
