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
Rectangle{
    function validatePassword(password) {
        const regex = /^(?=.*[A-Z])(?=.*\d).+$/;

        if (regex.test(password)) {
            console.log("Password is valid.");
            return true;
        } else {
            console.log("Password must contain at least one uppercase letter and one digit.");
            return false;
        }
    }

    width: parent.width
    function isValidForm(){
        return oldPassword.text.length!==0 &&  newPassword.text === verifyPassword.text && validatePassword(newPassword.text)
    }

    function resetForm(){
        oldPassword.text= "";
        newPassword.text= "";
        verifyPassword.text= "";
        accountManagementModel.isPasswordUpdated= false;
        accountManagementModel.isPasswordMatch= false;
        accountManagementModel.isRequestSent= false;
    }

    ColumnLayout{
      spacing: 10
      Rectangle {
          width: 500
          radius: 10
          height: 40
          color: "lightblue"

          Text {
              text: "Le mot de passe doit contenir au moins une lettre majuscule et un chiffre."
              anchors.centerIn: parent
              font.pixelSize: 14
              color: "black"
          }
      }
      Rectangle {
          visible: accountManagementModel.isRequestSent&& accountManagementModel.isPasswordUpdated
          width: 500
          radius: 10
          height: 40
          color: "lightgreen"

          Text {
              text: "Mot de passe mis à jours avec succées"
              anchors.centerIn: parent
              font.pixelSize: 14
              color: "black"
          }
      }
      Rectangle {
          visible: accountManagementModel.isRequestSent&& ! accountManagementModel.isPasswordMatch
          width: 500
          radius: 10
          height: 40
          color: "red"

          Text {
              text: "Le mot de passe actuel ne correspond pas à l'ancien mot de passe."
              anchors.centerIn: parent
              font.pixelSize: 14
              color: "black"
          }
      }
        RowLayout{
            Form {
                orientation: Qt.Vertical
                width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing

                FormLine {
                    FormGroup {
                        label: "Mot de passe actuel"
                        TextField {
                            id:oldPassword
                            width: 200
                            placeholderText: "Mot de passe actuel"
                            text:""
                        }
                    }
                }
                FormLine{
                    FormGroup{
                        label: "Nouveau mot de passe"
                        TextField {
                            id:newPassword
                            width: 200
                            height: 40
                            placeholderText: "Nouveau mot de passe"
                            text:""
                            echoMode: TextInput.Password
                            background: Rectangle {
                                   border.color:(newPassword.text.length===0 || validatePassword(newPassword.text)) ?"#3d7b52":"#ea0839"
                                   color: "transparent"
                                   radius: 5
                               }
                        }
                    }
                }
                FormLine{
                    FormGroup{
                        label: "Confirmer le nouveau mot de passe"
                        TextField {
                            id:verifyPassword
                            width: 200
                            height: 40
                            text:""
                            placeholderText: "Confirmer le nouveau mot de passe"
                            echoMode: TextInput.Password
                            background: Rectangle {
                                   border.color: newPassword.text === verifyPassword.text ?"#3d7b52":"#ea0839"
                                   color: "transparent"
                                   radius: 5
                               }

                        }
                    }
                }
                Row {
                    id: buttons

                    spacing: AssistantAbstractViewStyle.buttons.spacing

                    anchors.horizontalCenter: parent.horizontalCenter
                    TextButtonA {
                        id: resetButton
                        enabled:true
                        text:"Annuler"
                       onClicked:{
                         resetForm()

                       }
                    }
                    TextButtonB {
                        id: mainActionButton
                        enabled:isValidForm()
                        text:"Enregistrer"
                       onClicked:{
                           if(accountManagementModel.updatePassword(oldPassword.text, newPassword.text)){

                               console.log("bingooooooo")
                           }
                           else{

                           }

                       }
                    }
                }
        }
    }

}


    AccountManagementModel{
        id: accountManagementModel
    }
    Connections{
        target: accountManagementModel
        onIsRequestSentChanged:{
            console.log("testtttttttttttttttt");
          //  resetForm();
        }
    }



}
