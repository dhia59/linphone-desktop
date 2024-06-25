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

        Form {
            id:formcontainer
            orientation: Qt.Vertical
            width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing
           // anchors.horizontalCenter: parent.horizontalCenter

            FormLine {
                FormGroup {
                    TextField {
                        id: username
                        placeholderText: qsTr("Votre identifiant")
                        Layout.preferredWidth: parent.width - 20
                        Layout.alignment: Qt.AlignHCenter
                        color: "white"
                        font.pointSize: 11
                        leftPadding: 30
                        background: Rectangle {
                            implicitWidth: 200
                            implicitHeight: 50
                            radius: implicitHeight / 2
                            color: "transparent"

                            Text {
                                text: "\uf007"
                                font.pointSize: 14
                                font.family: fontAwesome.name
                                color: "#fbc159"
                                anchors.left: parent.left
                                anchors.verticalCenter: parent.verticalCenter
                                leftPadding: 10
                            }

                            Rectangle {
                                width: parent.width - 10
                                height: 1
                                anchors.horizontalCenter: parent.horizontalCenter
                                anchors.bottom: parent.bottom
                                color: blue
                            }
                        }
                    }
                }


            }


            FormLine {
                FormGroup {

                    PasswordField {
                        id: password
                        placeholderText: qsTr("Votre mot de passe")
                        Layout.preferredWidth: parent.width - 20
                        Layout.alignment: Qt.AlignHCenter
                        color: "white"
                        font.pointSize: 11
                        leftPadding: 30
                        echoMode: TextField.PasswordEchoOnEdit
                        background: Rectangle {
                            implicitWidth: 200
                            implicitHeight: 50
                            radius: implicitHeight / 2
                            color: "transparent"
                            Text {
                                text: "\uf023"
                                font.pointSize: 14
                                font.family: fontAwesome.name
                                color: "#fbc159"
                                anchors.left: parent.left
                                anchors.verticalCenter: parent.verticalCenter
                                leftPadding: 10
                            }

                            Rectangle {
                                width: parent.width - 10
                                height: 1
                                anchors.horizontalCenter: parent.horizontalCenter
                                anchors.bottom: parent.bottom
                                color: blue
                            }
                        }
                    }
                }
            }

            FormLine {
                visible: false
                FormGroup {
                    label: qsTr('transportLabel')

                    ComboBox {
                        id: transport
                        model: [ 'UDP', 'TCP', 'TLS']
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
            topPadding: 60
          //  loading: assistantModel.isProcessing

            spacing: AssistantAbstractViewStyle.buttons.spacing

            anchors.horizontalCenter: parent.horizontalCenter


          /*  CButton{
                height: 50
                Layout.preferredWidth: 200
                Layout.alignment: Qt.AlignHCenter
                name: "Log In"
                baseColor: "blue"
                borderColor: "red"

            }*/

            TextButtonB {
              id: mainActionButton
              enabled:false
              text:"Me connecter"
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
