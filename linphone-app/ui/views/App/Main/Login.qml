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
    property bool  noNetworkAlert:false

    ColumnLayout {

        anchors.horizontalCenter:  parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        id: formComponent
        property bool isValid: username.text.length &&
                               password.text.length
        onIsValidChanged: {
            mainActionButton.enabled = true;
        }
        width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
        property alias usernameText: username.text
        property alias passwordText: password.text
        function getTransport(){
            return transport.model[transport.currentIndex]
        }

        Form {
            orientation: Qt.Vertical
            width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
           // anchors.horizontalCenter: parent.horizontalCenter

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
                        model: [ 'TCP', 'TLS'] //'UDP',
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
            Text {
                visible: noNetworkAlert
                id: networkerrorLabel
                text: "Aucune connxion internet"
                color: "red"
            }
        }
        Row {
            id: buttons

          //  loading: assistantModel.isProcessing

            spacing: AssistantAbstractViewStyle.buttons.spacing

            anchors.horizontalCenter: parent.horizontalCenter

            TextButtonB {
              id: mainActionButton
              enabled:false
              text:"Login"
                onClicked:{
                  isBusy= true
                 //   busyIndicator.running= true
                    if (!assistantModel.addOtherSipAccount({
                        username:formComponent.usernameText,
                        password: formComponent.passwordText,
                        transport:formComponent.getTransport()
                    })) {
                     //   setText(qsTr('addOtherSipAccountError'))
                    } else {
                      //  setText('')
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
            if(AccountSettingsModel.registrationState===0 || noNetworkAlert){
                window.setView('Home')
            }
        }
    }

    Connections {
        target: AccountSettingsModel

        onFailedRegistration: {
           isErrorLabel= true
           // errorMessage="Nom d'utilisateur ou mot de passe invalide"
        }
        onNetworkErrorFirstLogin:{
            console.log("helloooooo")
            noNetworkAlert= true
           // errorMessage="aucune connxion internet"
        }
        onNetworkErrorLoggedIn:{
            noNetworkAlert= true
            console.log("login logged ", noNetworkAlert)
              window.setView('Home')
        }
        onRegistrationStateChanged:{
            if(AccountSettingsModel.registrationState===2){
                noNetworkAlert= false;
            }
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

