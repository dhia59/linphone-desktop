import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Dialogs 1.2
import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0
import Units 1.0
import App.Styles 1.0
import 'qrc:/ui/scripts/Utils/utils.js' as Utils
// =============================================================================
Rectangle{
    height: contentHeight
    width: parent.width
    property string loaderSource: "";

    ColumnLayout{

        spacing: 20
        Column{
            Rectangle {
                width:950
                radius: 10
                height: 80
                color: "#d9edf7"
                Row{
                    spacing: 50
                    //anchors.verticalCenter: parent.verticalCenter
                    // anchors.horizontalCenter: parent.horizontalCenter
                    anchors.centerIn: parent
                    Text {
                        text: "\uf05a" // Unicode for Font Awesome info circle icon
                        font.family: fontAwesome.name
                        color: "#3a87ad"
                        font.pixelSize: 26
                        anchors.verticalCenter: parent.verticalCenter
                    }
                    Column{
                        //anchors.verticalCenter: parent.verticalCenter
                        //  anchors.horizontalCenter:parent.horizontalCenter
                        Text {
                            color: "#3a87ad"
                            // anchors.horizontalCenter:  parent.horizontalCenter
                            font.pointSize: Units.dp * 10
                            id: info
                            text: "Vous pouvez personnaliser ici l'annonce de votre messagerie vocale en enregistrant :"
                        }
                        Text {
                            color: "#3a87ad"
                            // anchors.horizontalCenter:  parent.horizontalCenter
                            font.pointSize: Units.dp * 10
                            id: info1
                            text: "Soit une nouvelle annonce complète"
                        }
                        Text {
                            color: "#3a87ad"
                            // anchors.horizontalCenter:  parent.horizontalCenter
                            font.pointSize: Units.dp * 10
                            id: info2
                            text: "Soit juste l'énoncé de votre nom, qui sera joué à la place de votre numéro durant l'annonce par défaut"
                        }
                    }


                }



            }

        }
        Column{
            Rectangle {
                id: successMessage
                visible: false
                width: 950
                radius: 10
                height: 40
                color: "lightgreen"

                Text {
                    text: "Annonce mis a jour avec success"
                    anchors.centerIn: parent
                    font.pixelSize: 14
                    color: "black"
                }
            }
        }



        // Full announcement section
        Column{
            Text {
                text: "Je personnalise mon annonce complète"
                color: "#141B6C"
                font.pointSize: Units.dp * 10

            }
            Row{
                spacing: 10
                Rectangle {

                    width:350
                    height: 50
                    border.color:  "#141B6C"
                    border.width: 1
                    color: "#FFFFFF"
                    Row{

                        spacing: 5
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        Text {
                            text:"\uf04b"
                            font.family: fontAwesome.name
                            color:"#141B6C"
                        }
                        Text {
                            text: "Lire le fichier"
                            color:"#141B6C"
                            font.pointSize: Units.dp * 10
                        }
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {

                        }
                    }
                }
                Rectangle {

                    width:350
                    height: 50
                    border.color:  "#141B6C"
                    border.width: 1
                    color: "#FFFFFF"
                    Row{
                        spacing: 5
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        Text {
                            text: "\uf0c6"
                            font.family: fontAwesome.name
                            color:"#141B6C"
                        }
                        Text {
                            text: "Téléverser un fichier audio"
                            color:"#141B6C"
                            font.pointSize: Units.dp * 10
                        }
                    }



                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            fileDialogLoader.active= true
                            loaderSource= "full"
                            console.log("Upload audio file for full announcement");
                        }
                    }
                }


            }



        }


        // Name only section
        Column{
            Text {
                text: "Je personnalise l'énoncé de mon nom seulement"
                color: "#141B6C"
                font.pointSize: Units.dp * 10
            }
            Row {
                spacing: 10
                Rectangle {

                    width:350
                    height: 50
                    border.color:  "#141B6C"
                    border.width: 1
                    color: "#FFFFFF"
                    Row{
                        spacing: 5
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        Text {
                            text: "\uf04b"
                            font.family: fontAwesome.name
                            color:"#141B6C"
                        }
                        Text {
                            text: "Lire le fichier"
                            color:"#141B6C"
                            font.pointSize: Units.dp * 10
                        }
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("Upload audio file for full announcement");
                        }
                    }
                }
                Rectangle {

                    width:350
                    height: 50
                    border.color:  "#141B6C"
                    border.width: 1
                    color: "#FFFFFF"
                    Row{
                        spacing: 5
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        Text {
                            text: "\uf0c6"
                            font.family: fontAwesome.name
                            color:"#141B6C"
                        }
                        Text {
                            text: "Téléverser un fichier audio"
                            color:"#141B6C"
                            font.pointSize: Units.dp * 10
                        }
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            loaderSource= "nameOnly"
                            fileDialogLoader.active= true
                            console.log("Upload audio file for name only announcement");
                        }
                    }
                }
            }

        }

    }


    Loader{
        id: fileDialogLoader
        active: false
        sourceComponent: Component{
            FileDialog {
                id: fileDialog

                folder: shortcuts.home
                title: qsTr('fileChooserTitle')
                selectMultiple: false
                nameFilters: ["Audio Files (*.mp3 *.wav *.aac *.flac *.ogg *.wma *.aiff *.m4a *.mid *.amr)"]
                onAccepted: {
                    console.log("uploaded url : ",fileDialog.fileUrl);
                    fileDialogLoader.active = false
                    if(loaderSource==="full")
                        updateFullGreeting(fileDialog.fileUrl)
                    else
                        updateNameOnlyGreeting(fileDialog.fileUrl)
                }
                onRejected: fileDialogLoader.active = false
                Component.onCompleted: fileDialog.open()
            }
        }
    }

    function updateFullGreeting(url){
        console.log("fulllllllllllllll ", url)
        if(greetingManagement.updateFullGreeting(url)){
            console.log("loggggggggggggggggggggggg ")
           // showSuccessMessage();
        }

    }
    function updateNameOnlyGreeting(url){


    }
    function showSuccessMessage() {
        successMessage.visible = true; // Show the success message

        // Start a timer to hide the message after 10 seconds
        var timer = Qt.createQmlObject('import QtQuick 2.0; Timer { interval: 5000; running: true; repeat: false; onTriggered: successMessage.visible = false; }', parent);
        timer.start();
    }
    GreetingManagement{
        id: greetingManagement
    }
    Loader{
        id:busyIndicatorLoader
        source: "qrc:/ui/modules/Common/Animations/MyBusyIndicator.qml"
        visible: greetingManagement.isLoading
        //anchors.fill: parent
        anchors.centerIn: parent

    }
    Connections{
        target: greetingManagement
       onFullGreetingChanged:{
           if(greetingManagement.fullGreeting==="OK")
           {
               showSuccessMessage()
           }


       }
    }

}
