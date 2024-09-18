import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Common 1.0
import Linphone 1.0
import ConstantsCpp 1.0

import App.Styles 1.0
import Common.Styles 1.0
import Linphone.Styles 1.0
// =============================================================================

Item {
    Image {
        source: "qrc:/assets/images/saylobackground.png"
        anchors.fill: parent
        fillMode: Image.PreserveAspectCrop
        // visible: AccountSettingsModel.registrationState!==0
    }
    property bool isErrorLabel: false
    property bool isBusy: false
    property string errorMessage:""



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



    ColumnLayout {

        anchors.horizontalCenter:  parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        id: formComponent
        property bool isValid: username.text.length &&
                               password.text.length
        onIsValidChanged: {
            mainActionButton.enabled = isValid;
        }
        width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
        property alias usernameText: username.text
        property alias passwordText: password.text
        function getTransport(){
            return transport.model[transport.currentIndex]
        }
        Row {
            id: errorBlockNetwork
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                visible:! InternetChecker.isNetworkReachable
                id: networkerrorLabel
                text: "Aucune connxion internet"
                color: "red"
            }
        }
        Form {
            id:formcontainer
            orientation: Qt.Vertical
            width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
            FormLine {
                FormGroup {
                    TextField {
                        id: username
                        placeholderText: qsTr("Nom d'utilisateur")
                    }
                }


            }

            FormLine {
                FormGroup {

                    PasswordField {
                        id: password
                        placeholderText: qsTr("Mot de passe")
                    }
                }
            }

            FormLine {
                visible: false
                FormGroup {
                    label: qsTr('transportLabel')

                    ComboBox {
                        id: transport
                        model: [ 'TCP', 'TCP', 'TLS']
                    }
                }

            }
        }

        Row {
            id: errorBlock
            anchors.horizontalCenter: parent.horizontalCenter
            Text {
                visible: isErrorLabel
                id: errorLabel
                text: "Nom d'utilisateur ou mot de passe invalide"
                color: "red"
            }

        }

        Row {

            id: buttons
            topPadding: 60
            spacing: AssistantAbstractViewStyle.buttons.spacing

            anchors.horizontalCenter: parent.horizontalCenter

            TextButtonB {
                id: mainActionButton
                enabled:false
                text:"Login"
                onClicked:{
                    isBusy= true
                    if (!assistantModel.addOtherSipAccount({
                                                               username:formComponent.usernameText,
                                                               password: formComponent.passwordText,
                                                               transport:formComponent.getTransport()
                                                           })) {
                    } else {
                        window.setView('Home')
                    }
                }

                anchors.verticalCenter: parent.verticalCenter
            }

        }


        AssistantModel {
            id: assistantModel
            configFilename: 'use-other-sip-account.rc'
        }
        Connections {
            target: AccountSettingsModel

            onAccountSettingsUpdated: {
                console.log("stateeeee   "+ AccountSettingsModel.registrationState)
                if(AccountSettingsModel.registrationState===0 ){
                    window.setView('Home')
                }
            }
        }

        Connections {
            target: AccountSettingsModel

            onFailedRegistration: {
                isErrorLabel= true
            }
        }
    }

    Loader{
        id:busyIndicatorLoader
        source: "qrc:/ui/modules/Common/Animations/MyBusyIndicator.qml"
        visible: AccountSettingsModel.registrationState === AccountSettingsModel.RegistrationStateInProgress
        anchors.fill: parent
        onVisibleChanged: {
            console.log("visibleeee ", isBusy)
        }
    }
    Rectangle {
        id: busyOverlay
        color: "transparent"
        anchors.fill: parent
        visible: busyIndicatorLoader.visible
        MouseArea {
            anchors.fill: parent
            onClicked: {
                // Prevent interaction with the main page while busy
            }
        }
    }

}
