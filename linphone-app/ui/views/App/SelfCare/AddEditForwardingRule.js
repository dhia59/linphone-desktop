/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-desktop
 * (see https://www.linphone.org).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
// =============================================================================
// `AddEditForwardingRule.qml` Logic.
// =============================================================================

.import Linphone 1.0 as Linphone
.import QtQuick.Window 2.2 as Window

.import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================
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
function populateTargetNumbersFilter(listTargetNumbers){
     var values= [ "EXT","PSTN","PLMN"]
    for (var i = 0; i < values.length; ++i) {
         if (listTargetNumbers.indexOf(values[i]) !== -1) {
                  repeater.itemAt(i).checked = true;
              }
    }

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
function populate(){
    specificCallerList=[]
    forwardingLabel.text= currentForwardingData.label;
    forwardingOrigin.currentIndex=getOriginInt(currentForwardingData.filter);
    forwardType.currentIndex=getForwardType(currentForwardingData.forwardType);
    forwardingDestination.currentIndex=getNumeroAppeleInt(currentForwardingData.destination);
    console.log("forwardType data",currentForwardingData.destination)
    console.log("forwardType index",forwardingDestination.currentIndex)
    populateTargetNumbersFilter(currentForwardingData.filtersOnTargetNumber);
    noAnswerForwardingDelay.currentIndex= getNoAnswerDelayInt(currentForwardingData.noAnswerForwardingDelay);
    if(currentForwardingData.timeFilter!==null){
        calendarButton.checked= true;
        getCheckedDaysFilter(currentForwardingData.timeFilter.split("/")[0]);
       // var time= currentForwardingData.timeFilter.split("/")[1].split("-");
       // fromDateField.text= time[0];
       // toDateField.text= time[1];
    }
    //destinationTextRect.visible=getDestinationInt(currentForwardingData.destination)===2
    destinationText ="";
    console.log("heloooooo 0 forwardingDestination",forwardingDestination.currentIndex)
    if(forwardingDestination.currentIndex===2){
        console.log("heloooooo forwardingDestination")
        destinationText= currentForwardingData.destination
        destinationTextRect.visible= true
    }
    if(currentForwardingData.specificCaller.length>0){
        console.log("specific caller list :", currentForwardingData.specificCaller.split(","))
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
    console.log("delayyyyyyy", delay)
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
    console.log("adrrrrrr ", address)
    if(address.indexOf('"')!== -1){
        address= address.split('"')[2]
    }
    console.log("fffffffff ", address)
    var result= address.split("@")[0].replace("sip:", "")
    result=result.replace("<","")
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

function updateList(){
    specificCallerListRepeater.model  = specificCallerList
}
function isValidForm(){
    if(forwardingDestination.currentIndex===2){
        return destinationText.length>0 && forwardingLabel.text.length>0;
    }
    return forwardingLabel.text.length>0;
}

function showAlert(text){
    mainwindow.attachVirtualWindow(Utils.buildCommonDialogUri('OKDialog'), {
                                   descriptionText: text
                               }, function (status) {
                                   if (status) {

                                   }
                               })
}
