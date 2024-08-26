import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0

import App.Styles 1.0
import Units 1.0
import UtilsCpp 1.0
// =============================================================================
import 'qrc:/ui/scripts/Utils/utils.js' as Utils
import 'AddEditForwardingRule.js' as Logic

ScrollView {

    width: 500
    height: 550
    x:50

    function populate(){
        Logic.populate()
    }



    property ForwardingModel currentForwardingData: null
    property var specificCallerList: []
    property bool showAdvancedSettings: false
    property var destinationText: ""
    Column {
        anchors.fill: parent
        Form {
            orientation: Qt.Vertical
            width: FormHGroupStyle.content.maxWidth + FormHGroupStyle.spacing

            FormLine {
                FormGroup {
                    label: "Etiquette"
                    TextField {
                        id:forwardingLabel
                        width: 200
                        text:currentForwardingData!==null? currentForwardingData.label: ""
                    }
                }
            }
            FormLine{
                FormGroup {
                    label: "Filtrer par origine"
                    ComboBox  {
                        width: 200
                        id:forwardingOrigin
                        model: ["Tous", "Anonyme","Externes","Internes" ]
                        currentIndex: currentForwardingData!==null?Logic.getOriginInt(currentForwardingData.filter):0
                    }
                }
            }
            FormLine{
                FormGroup {
                    label: "Filtrer par conditions téléphoniques"
                    ComboBox  {
                        id: forwardType
                        width: 200
                        model: ["Renvoi inconditionnel", "Renvoi car non répondu","Renvoi car occupé","Renvoi car inaccessible" ]
                        currentIndex: currentForwardingData!==null?Logic.getForwardType(currentForwardingData.forwardType):0
                        onCurrentIndexChanged: {
                            if(currentIndex==1)
                                noAnswerForwardingDelayfield.visible= true;
                            else
                                noAnswerForwardingDelayfield.visible= false

                        }
                    }
                }
            }
            FormLine{
                FormGroup {
                    label: "Filtrer par conditions téléphoniques"
                    id: noAnswerForwardingDelayfield
                    visible: currentForwardingData!==null
                    ComboBox  {
                        id: noAnswerForwardingDelay
                        width: 200
                        model: ["[00:00:05]", "[00:00:10]","[00:00:15]","[00:00:20]" ,"[00:00:25]",
                            "[00:00:30]","[00:00:45]","[00:01:00]" ,"[00:01:30]","[00:02:00]"]
                        currentIndex: currentForwardingData!==null?Logic.getNoAnswerDelayInt(currentForwardingData.noAnswerForwardingDelay):0
                        onCurrentIndexChanged: {

                        }
                    }
                }
            }
            FormLine{
                FormGroup {
                    id: distinationCombo
                    label: "Type déstination"
                    ComboBox  {
                        id: forwardingDestination
                        width: 200
                        model: ["Réceptioniste de l'entreprise", "Boite vocale par défaut de la communité","Autre" ]
                        currentIndex: currentForwardingData!==null?Logic.getDestinationInt(currentForwardingData.destination):0
                        onCurrentIndexChanged: {
                            console.log("visssssssss ",currentIndex===2 )
                            distinationText.visible= (currentIndex===2)
                            destinationTextRect.visible= currentIndex===2 && destinationText!==""
                        }
                    }
                }
            }
            FormLine{
                Rectangle{
                    id: destinationTextRect
                    visible: destinationText.length>0
                    height: 40
                    width: 150
                    radius: 10
                    color: "transparent"
                    border.color: "#141B6C"
                    border.width: 1

                    Text {
                        id: destinationn
                        text: destinationText
                        width: parent.width
                        height: parent.height
                        horizontalAlignment: Text.right
                        verticalAlignment: Text.AlignVCenter
                    }
                    MouseArea {

                        width: 40
                        height: parent.height
                        anchors.right: parent.right
                        onClicked: {
                            destinationTextRect.visible= false
                        }

                        Rectangle {
                            width: 20
                            height: 20
                            anchors.centerIn: parent

                            Text {
                                text: "X"
                                anchors.centerIn: parent
                            }
                        }

                    }
                }

            }

            FormLine{
                FormGroup {
                    visible: distinationCombo.currentIndex===2
                    id: distinationText
                    label: "Déstination"

                    ContactsAutoComplete {

                        onAddContact:{
                            if(isNumberValid(sipAddress)){

                                destinationText = Logic.getNumberOrExtension(sipAddress)
                            }
                            else{
                              Logic.showInvalideNumberAlert("Le numéro n'est pas valide. Le numéro doit commencer par +33 suivi de 9 chiffres ou par 0 suivi de 9 chiffres.")
                            }
                        }

                        onEntryClicked: {
                           destinationTextRect.visible= true
                            destinationText =Logic.getNumberOrExtension(entry.sipAddress)
                        }
                    }

                }
            }

            FormLine{
                FormGroup {
                    id: advancedSettingsField
                     CheckBox {
                        id: advancedSettingsFieldValue
                        text: "Réglages avancés"
                        checked: showAdvancedSettings
                        onClicked:  {
                            showAdvancedSettings= !showAdvancedSettings
                        }

                    }
                }
            }


            ColumnLayout{
                visible: showAdvancedSettings
                GridLayout {
                    rows: specificCallerList.length / 3
                    columns: 3
                    Repeater{
                        id:specificCallerListRepeater
                        model: specificCallerList
                        delegate:Rectangle{
                            id: rec
                            height: 40
                            width: 150
                            radius: 10
                            color: "transparent"
                            border.color: "#141B6C"
                            border.width: 1

                            Text {
                                id: caller
                                text: modelData
                                width: parent.width
                                height: parent.height
                                // anchors.centerIn: parent
                                horizontalAlignment: Text.right
                                verticalAlignment: Text.AlignVCenter
                            }
                            MouseArea {
                                id: mouseArea
                                width: 40
                                height: parent.height
                                anchors.right: parent.right
                                onClicked: {
                                    var test= specificCallerList.splice(index,1)
                                    Logic.updateList()
                                }

                                Rectangle {
                                    width: 20
                                    height: 20
                                    anchors.centerIn: parent

                                    Text {
                                        text: "X"
                                        anchors.centerIn: parent
                                    }
                                }

                            }
                        }

                    }
                }

                FormLine{
                    FormGroup {

                        id: calledNumberFilter
                        label: "Filtrer par appelant"

                        ContactsAutoComplete {
                            id: smartSearchBar
                            onAddContact:{
                                console.log("heyyyyyyyyyy ",isNumberValid(sipAddress))
                                if(isNumberValid(sipAddress)){
                                    if(specificCallerList.indexOf(Logic.getNumberOrExtension(sipAddress))<0){
                                        specificCallerList.push(Logic.getNumberOrExtension(sipAddress))
                                        Logic.updateList()

                                    }
                                    else{
                                      Logic.showAlert("Ce contact existe déja !")
                                    }

                                }
                                else{
                                 Logic.showAlert("Le numéro n'est pas valide. Le numéro doit commencer par +33 suivi de 9 chiffres ou par 0 suivi de 9 chiffres.")
                                }
                            }

                            onEntryClicked: {
                                console.log("heyyyyyyyyyy ", entry.sipAddress)
                                var sipAddress= entry.sipAddress.split('"')

                                if(specificCallerList.indexOf(Logic.getNumberOrExtension(entry.sipAddress))<0){
                                    specificCallerList.push(Logic.getNumberOrExtension( entry.sipAddress))
                                    Logic.updateList()

                                }
                                else{
                                   Logic.showAlert("Ce contact existe déja !")
                                }


                            }
                        }


                    }
                }

                Row {
                    ColumnLayout{
                        Text {
                            id: name
                            text: qsTr("Filtrer par numéro appelé")
                        }
                        RowLayout{
                            spacing: 5
                            Repeater {
                                id: repeater
                                model: ["Numéro court", "Numéro fixes", "Numéro Mobiles"]

                                delegate: Button {
                                    background: Rectangle {
                                        radius: 20
                                        color: numberFilter.checked ?"#141B6C"  : "#e0e0e0"
                                    }
                                    id: numberFilter
                                    text: modelData
                                    checkable: true
                                    checked: currentForwardingData!==null? Logic.getIsCheckedTargetNumbersFilter(index): false
                                    height: 40
                                }
                            }
                        }

                    }


                }
                Row {
                    spacing: 5
                    Column {
                        spacing: 5
                        Button {
                            id: presenceButton
                            text: "Filtrer selon l'état de présence"
                            background: Rectangle {
                                radius: 20
                                color: presenceButton.checked ?"#141B6C"  : "#e0e0e0"
                            }
                            checkable: true
                            height: 40
                            onClicked: {
                                if (presenceButton.checked) {
                                    calendarButton.checked = false
                                }
                            }
                        }
                    }
                    Column{
                        Button {
                            id: calendarButton
                            text: "Filtrer par calendrier"
                            checkable: true
                            height: 40
                            background: Rectangle {
                                radius: 20
                                color: calendarButton.checked ?"#141B6C"  : "#e0e0e0"
                            }
                            onClicked: {
                                if (calendarButton.checked) {
                                    console.log("calendarrrrrrr")
                                    presenceButton.checked = false
                                }
                            }
                        }
                    }

                }
                ColumnLayout{
                    anchors.topMargin: 20
                    visible: calendarButton.checked
                    RowLayout{
                        ColumnLayout{
                            Text {
                                id: de
                                text: qsTr("DE")
                            }
                            TextField{
                                id: fromDateField;
                                text: "00:00"
                                Layout.preferredWidth: parent.cellWidth
                                color: NewConferenceStyle.fields.textColor.color; font.weight: NewConferenceStyle.fields.weight; font.pointSize: NewConferenceStyle.fields.pointSize
                                function getDate(){
                                    return text
                                }
                                function setDate(date){
                                    text = UtilsCpp.toDateString(date, 'hh:mm')
                                }
                                MouseArea{
                                    anchors.fill: parent
                                    onClicked: {
                                        window.attachVirtualWindow(Utils.buildCommonDialogUri('DateTimeDialog'), {showTimePicker:true,selectedTime : fromDateField.text}
                                                                   , function (status) {
                                                                        if(status){
                                                                           if(toDateField.text!=="00:00" && status.selectedTime >toDateField.text ){
                                                                               Logic.showAlert( "L'heure de début ne doit pas dépasser l'heure de fin.")
                                                                           }
                                                                           else{
                                                                               fromDateField.text= status.selectedTime
                                                                           }
                                                                         }
                                                                   }
                                                                   )
                                    }
                                }
                            }
                        }

                        ColumnLayout{
                            Text {
                                id: to
                                text: qsTr("Jusqu'a")
                            }
                            TextField{
                                id: toDateField;
                                text:"00:00"
                                Layout.preferredWidth: parent.cellWidth
                                color: NewConferenceStyle.fields.textColor.color; font.weight: NewConferenceStyle.fields.weight; font.pointSize: NewConferenceStyle.fields.pointSize
                                function getDate(){
                                    return text
                                }
                                function setDate(date){
                                    text = UtilsCpp.toDateString(date, 'hh:mm')
                                }

                                MouseArea{
                                    anchors.fill: parent
                                    onClicked: {
                                        window.attachVirtualWindow(Utils.buildCommonDialogUri('DateTimeDialog'), {showTimePicker:true,selectedTime : toDateField.text}
                                                                   , function (status) {
                                                                       if(status){
                                                                           if(fromDateField.text!=="00:00" && status.selectedTime <fromDateField.text ){
                                                                               Logic.showAlert("L'heure de début ne doit pas dépasser l'heure de fin.")
                                                                          }
                                                                           else{
                                                                               toDateField.text= status.selectedTime
                                                                           }

                                                                       }
                                                                   }
                                                                   )
                                    }
                                }
                            }
                        }

                    }


                    Row {
                        spacing: 5
                        Repeater {
                            id: daysRepeater
                            model: ["L", "Ma", "Me", "Je", "V", "S", "D"]
                            delegate: Button {
                                id:roundedButton
                                background: Rectangle {
                                    radius: 20
                                    color: roundedButton.checked ?"#141B6C"  : "#e0e0e0"
                                }
                                text: modelData
                                checkable: true
                                width: 40
                                height: 40
                            }
                        }
                    }

                }



            }

            Row {
                id: buttons

                spacing: AssistantAbstractViewStyle.buttons.spacing

                anchors.horizontalCenter: parent.horizontalCenter

                TextButtonB {
                    id: mainActionButton
                    enabled:Logic.isValidForm()
                    text:"Enregistrer"
                    anchors.verticalCenter: parent.verticalCenter
                    onClicked:{
                        if(currentForwardingData===null){
                            if (forwardingManagement.addForwardingRule({
                                                                            label: forwardingLabel.text,
                                                                            origin: forwardingOrigin.currentIndex,
                                                                            forwardType: forwardType.currentIndex,
                                                                            destination: forwardingDestination.currentIndex,
                                                                            destinationText: destinationText,
                                                                            noAnswerForwardingDelay : noAnswerForwardingDelay.currentIndex,
                                                                            numberFilter: Logic.getTargetNumbersFilter(),
                                                                            specificCaller: specificCallerList,
                                                                            daysFilter: Logic.getDaysFilter(),
                                                                            startTimeFilter: fromDateField.text,
                                                                            endTimeFilter: toDateField.text

                                                                        }))
                            {
                                Logic.resetForm()
                            }

                        }
                        else {
                            if (forwardingManagement.editForwardingRule({
                                                                             forwardingId: currentForwardingData.forwardingID,
                                                                             label: forwardingLabel.text,
                                                                             origin: forwardingOrigin.currentIndex,
                                                                             forwardType: forwardType.currentIndex,
                                                                             destination: forwardingDestination.currentIndex,
                                                                             destinationText: destinationText,
                                                                             noAnswerForwardingDelay : noAnswerForwardingDelay.currentIndex,
                                                                             numberFilter: Logic.getTargetNumbersFilter(),
                                                                             specificCaller: specificCallerList,
                                                                             daysFilter: Logic.getDaysFilter(),
                                                                             startTimeFilter: fromDateField.text,
                                                                             endTimeFilter: toDateField.text,
                                                                             activated: currentForwardingData.activated

                                                                         }))
                            {
                                Logic.resetForm()
                            }


                        }


                    }
                }

            }


            ForwardingManagement{
                id: forwardingManagement
            }

        }

    }

}


