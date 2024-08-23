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
ScrollView {
    width: 500 // Adjust width as needed
    height: 550 // Adjust height as needed
    function getForwardType(str) {
        switch (str) {
        case "AL":
            return 0;
        case "NA":
            return 1;
        case "OB":
            return 2;
        case "UR":
            return 3;
        default:
            return -1;
        }
    }
    function resetForm(){
        showAdvancedSettings= false
        advancedSettingsFieldValue.checked= showAdvancedSettings
        forwardingLabel.text="";
        forwardingOrigin.currentIndex=0;
        forwardType.currentIndex=0;
        forwardingDestination.currentIndex=0;
        destinationText ="";        
        noAnswerForwardingDelay.currentIndex=0;
        specificCallerList=[];

        fromDateField.text="00:00";
        toDateField.text="00:00";
        for (var i = 0; i < 3; ++i) {
            repeater.itemAt(i).checked= false
        }
        updateList();
        calendarButton.checked = false;
        presenceButton.checked = false;
       /* for (var j = 0; i < 7; ++j) {

            daysRepeater.itemAt(j).checked= false
        }*/
    }
    function populate(){
        forwardingLabel.text= currentForwardingData.label;
        forwardingOrigin.currentIndex=getOriginInt(currentForwardingData.filter);
        forwardType.currentIndex=getForwardType(currentForwardingData.forwardType);
        if(currentForwardingData.timeFilter!==null){
            calendarButton.checked= true;
            getCheckedDaysFilter(currentForwardingData.timeFilter.split("/")[0]);
           // var time= currentForwardingData.timeFilter.split("/")[1].split("-");
           // fromDateField.text= time[0];
           // toDateField.text= time[1];
        }
          destinationText ="";
        if(forwardingDestination.currentIndex===2){
            destinationText= currentForwardingData.destination
        }
        if(currentForwardingData.specificCaller.length>0){
            specificCallerList= currentForwardingData.specificCaller.split(",");
            updateList();
        }
    }

    function getOriginInt(origin) {
        console.log("heloooo ", origin )
        switch (origin) {
        case "A":
            return 0;
        case "X":
            return 1;
        case "E":
            return 2;
        case "I":
            return 3;
        default:
            return -1;
        }
    }
    function isNumberValid(phoneNumber){
        const pattern1 = /^\+33\d{9}$/;
        const pattern2 = /^0\d{9}$/;
        return pattern1.test(phoneNumber) || pattern2.test(phoneNumber);
    }

    // utils.js
    function getNoAnswerDelayInt(delay) {
        switch (delay) {
        case 5000:
            return 0;
        case 10000:
            return 1;
        case 20000:
            return 2;
        case 25000:
            return 3;
        case 30000:
            return 4;
        case 45000:
            return 5;
        case 60000:
            return 6;
        case 90000:
            return 7;
        case 120000:
            return 8;
        default:
            return -1;
        }
    }
    function getNumberOrExtension(address){
        console.log("fffffffff ", address)
        var result= address.split("@")[0].replace("sip:", "")
        console.log("fffffffff result", result)
        return result;
    }

    function getDestinationInt(destination) {
        switch (destination) {
        case "ENT_RCPT":
            return 0;
        case "ENT_VM":
            return 1;
        default:
            return 2;
        }
    }
    function getCheckedDaysFilter(days){
        var listDays= ["Mon","Tue","Wed","Thu","Fri","Sat", "Sun"]
        var checkedDays;
        if(days==="All"){
            checkedDays= listDays;
        }
        else{
            checkedDays= days.split("+");
        }
        /*console.log("dayssssssssssss ", checkedDays)
        for(var i=0; i<checkedDays.length; i++){
            daysRepeater.itemAt(listDays.indexOf(checkedDays[i])).checked= true;
        }*/

    }

    function getNumeroAppeleInt(destination) {
        switch (destination) {
        case "ENT_RCPT":
            return 0;
        case "ENT_VM":
            return 1;
        default:
            return 2;
        }
    }
    function getTargetNumbersFilter() {
        var checkedItems = [];
        var values= [ "EXT","PSTN","PLMN"]
        for (var i = 0; i < repeater.count; ++i) {
            if (repeater.itemAt(i).checked)
                checkedItems.push(values[i]);
        }
        return checkedItems;
    }
    function getIsCheckedTargetNumbersFilter(index){
        var values= [ "EXT","PSTN","PLMN"]
        var test= currentForwardingData.filtersOnTargetNumber.indexOf(values[index]) !== -1;
        return test;
    }

    function getDaysFilter() {
        var checkedItems = [];
        var values= ["Mon","Tue","Wed","Thu","Fri","Sat", "Sun"]
        for (var i = 0; i < daysRepeater.count; ++i) {
            if (daysRepeater.itemAt(i).checked)
                checkedItems.push(values[i]);
        }
        return checkedItems;
    }
    function updateList(){
        specificCallerListRepeater.model  = specificCallerList
    }
    function isValidForm(){
        if(forwardingDestination.currentIndex===2){
            return destinationText.length>0 && forwardingLabel.text.length>0;
        }
        return forwardingLabel.text.length>0;
    }

    property ForwardingModel currentForwardingData: null
    property var specificCallerList: []
    property bool showAdvancedSettings: false
    property var destinationText: ""
    Column {
        anchors.fill: parent
        //width: 200

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
                        currentIndex: currentForwardingData!==null?getOriginInt(currentForwardingData.filter):0
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
                        currentIndex: currentForwardingData!==null?getForwardType(currentForwardingData.forwardType):0
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
                        currentIndex: currentForwardingData!==null?getNoAnswerDelayInt(currentForwardingData.noAnswerForwardingDelay):0
                        onCurrentIndexChanged: {

                        }
                    }
                }
            }
            FormLine{
                FormGroup {
                    id: distinationCombo
                    label: "Déstination"
                    ComboBox  {
                        id: forwardingDestination
                        width: 200
                        model: ["Réceptioniste de l'entreprise", "Boite vocale par défaut de la communité","Autre" ]
                        currentIndex: currentForwardingData!==null?getDestinationInt(currentForwardingData.destination):0
                        onCurrentIndexChanged: {
                            if(currentIndex===2){
                                distinationText.visible= true
                            }
                            else{
                                distinationText.visible= false

                            }
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
                    border.color: "#222154"
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
                            destinationText=""
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
                            console.log("heyyyyyyyyyy ",isNumberValid(sipAddress))
                            if(isNumberValid(sipAddress)){
                                destinationText = getNumberOrExtension(sipAddress)
                            }
                            else{
                                window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                               descriptionText: "Le numéro n'est pas valide. Le numéro doit commencer par +33 suivi de 9 chiffres ou par 0 suivi de 9 chiffres."
                                                           }, function (status) {
                                                               if (status) {

                                                               }
                                                           })
                            }
                        }

                        onEntryClicked: {
                            console.log("heyyyyyyyyyy ", entry.sipAddress)
                            var sipAddress= entry.sipAddress.split('"')
                            destinationText = getNumberOrExtension(entry.sipAddress)
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
                            border.color: "#222154"
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
                                    updateList()
                                    console.log("yooooooo ", specificCallerList.splice(index,1))
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
                                    if(specificCallerList.indexOf(getNumberOrExtension(sipAddress))<0){
                                        specificCallerList.push(getNumberOrExtension(sipAddress))
                                        updateList()

                                    }
                                    else{
                                        window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                                       descriptionText: "Ce contact existe déja !"
                                                                   }, function (status) {
                                                                       if (status) {

                                                                       }
                                                                   })
                                    }

                                }
                                else{
                                    window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                                   descriptionText: "Le numéro n'est pas valide. Le numéro doit commencer par +33 suivi de 9 chiffres ou par 0 suivi de 9 chiffres."
                                                               }, function (status) {
                                                                   if (status) {

                                                                   }
                                                               })
                                }
                            }

                            onEntryClicked: {
                                console.log("heyyyyyyyyyy ", entry.sipAddress)
                                var sipAddress= entry.sipAddress.split('"')
                                if(specificCallerList.indexOf(getNumberOrExtension(entry.sipAddress))<0){
                                    specificCallerList.push(getNumberOrExtension(entry.sipAddress))
                                    updateList()

                                }
                                else{
                                    window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                                   descriptionText: "Ce contact existe déja !"
                                                               }, function (status) {
                                                                   if (status) {

                                                                   }
                                                               })
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
                                        color: numberFilter.checked ?"#222154"  : "#e0e0e0"
                                    }
                                    id: numberFilter
                                    text: modelData
                                    checkable: true
                                    checked: currentForwardingData!==null? getIsCheckedTargetNumbersFilter(index): false
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
                                color: presenceButton.checked ?"#222154"  : "#e0e0e0"
                            }
                            checkable: true
                            height: 40
                            onClicked: {
                                if (presenceButton.checked) {
                                    console.log("presenceeeeeee")
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
                                color: calendarButton.checked ?"#222154"  : "#e0e0e0"
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
                                                                       console.log("statusssssssssss ", status.selectedTime)
                                                                       if(status){
                                                                           if(toDateField.text!=="00:00" && status.selectedTime >toDateField.text ){
                                                                               window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                                                                              descriptionText: "L'heure de début ne doit pas dépasser l'heure de fin."
                                                                                                          }, function (status) {
                                                                                                              if (status) {

                                                                                                              }
                                                                                                          })
                                                                           }
                                                                           else{
                                                                               fromDateField.text= status.selectedTime
                                                                           }
                                                                           console.log("comppppp ", fromDateField.text>toDateField.text)
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
                                                                               window.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                                                                                              descriptionText: "L'heure de début ne doit pas dépasser l'heure de fin."
                                                                                                          }, function (status) {
                                                                                                              if (status) {

                                                                                                              }
                                                                                                          })
                                                                           }
                                                                           else{
                                                                               console.log("statusssssssssss to: ", status.selectedTime)
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
                                    color: roundedButton.checked ?"#222154"  : "#e0e0e0"
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
                    enabled:isValidForm()
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
                                                                            numberFilter: getTargetNumbersFilter(),
                                                                            specificCaller: specificCallerList,
                                                                            daysFilter: getDaysFilter(),
                                                                            startTimeFilter: fromDateField.text,
                                                                            endTimeFilter: toDateField.text

                                                                        }))
                            {
                                resetForm()
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
                                                                             numberFilter: getTargetNumbersFilter(),
                                                                             specificCaller: specificCallerList,
                                                                             daysFilter: getDaysFilter(),
                                                                             startTimeFilter: fromDateField.text,
                                                                             endTimeFilter: toDateField.text,
                                                                            activated: currentForwardingData.activated

                                                                         }))
                            {
                                resetForm()
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


