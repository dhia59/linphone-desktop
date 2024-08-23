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
// `SelfCareWindow.qml` Logic.
// =============================================================================

.import Linphone 1.0 as Linphone
.import QtQuick.Window 2.2 as Window

.import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================
function attachVirtualWindow (component, properties, exitStatusHandler) {
  return virtualWindow.setContent(component, properties, exitStatusHandler);
}


function handleActiveFocusItemChanged (activeFocusItem) {
  var smartSearchBar = window._smartSearchBar

  if (activeFocusItem == null && smartSearchBar) {
    smartSearchBar.closeMenu()
  }
}

function handleClosing (close) {
  if (Linphone.SettingsModel.exitOnClose) {
    console.info("Exiting App from MainWindow");
    Qt.quit()
    return
  }
}

// -----------------------------------------------------------------------------

function lockView (info) {
  window._lockedInfo = info
}

function unlockView () {
  window._lockedInfo = undefined
}

function setView (view, props, callback) {
    mainLoader.setSource(view + '.qml', props || {})
}

// -----------------------------------------------------------------------------

function openConferenceManager (params) {
  var App = Linphone.App
  var callsWindow = App.getCallsWindow()

  App.smartShowWindow(callsWindow)
  callsWindow.openConferenceManager(params)
}

function manageAccounts () {
  window.attachVirtualWindow(Qt.resolvedUrl('Dialogs/ManageAccounts.qml'))
}

// -----------------------------------------------------------------------------
/*
function updateSelectedEntry (view, props) {
  var item = mainLoader.item

  var menu = item.menu
  var timeline = item.timeline

  if (view === 'Home') {
    menu.resetSelectedEntry()
  } else if (view === 'Contacts') {
    item.contactsEntry.select()
  } else if (view === 'Conferences') {
    item.conferencesEntry.select()
  }
}*/

// -----------------------------------------------------------------------------

//function handleAuthenticationRequested (authInfo, realm, sipAddress, userId) {
//  window.attachVirtualWindow(Qt.resolvedUrl('Dialogs/AuthenticationRequest.qml'), {
//    authInfo: authInfo,
//    realm: realm,
//    sipAddress: 'sip:'+sipAddress,
//    userId: userId,
//    virtualWindowHash:Qt.md5('Dialogs/AuthenticationRequest.qml'+realm+sipAddress+userId)
//  })
//}
