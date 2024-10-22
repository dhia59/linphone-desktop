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
// `MainWindow.qml` Logic.
// =============================================================================

.import Linphone 1.0 as Linphone
.import QtQuick.Window 2.2 as Window

.import 'qrc:/ui/scripts/Utils/utils.js' as Utils

// =============================================================================

function handleActiveFocusItemChanged (activeFocusItem) {
  var smartSearchBar = mainwindow._smartSearchBar

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
  mainwindow._lockedInfo = info
}

function unlockView () {
  mainwindow._lockedInfo = undefined
}

function setView (view, props, callback) {
  function apply (view, props, showWindow, callback) {
	if(showWindow)
        Linphone.App.smartShowWindow(mainwindow)

    var item = mainLoader.item

    updateSelectedEntry(view, props)
    mainwindow._currentView = view
    item.contentLoader.setSource(view + '.qml', props || {})
    if(callback)
		callback()
  }

  var lockedInfo = mainwindow._lockedInfo
  if (!lockedInfo) {
    apply(view, props, false, callback)
    return
  }
  mainwindow.attachVirtualWindow(Utils.buildCommonDialogUri('ConfirmDialog'), {
    descriptionText: lockedInfo.descriptionText,
  }, function (status) {
    if (status) {
      unlockView()
      apply(view, props, true, callback)
    } else {
      updateSelectedEntry(mainwindow._currentView, props)
    }
  })
}

// -----------------------------------------------------------------------------

function openConferenceManager (params) {
  var App = Linphone.App
  var callsWindow = App.getCallsWindow()

  App.smartShowWindow(callsWindow)
  callsWindow.openConferenceManager(params)
}

function manageAccounts () {
  mainwindow.attachVirtualWindow(Qt.resolvedUrl('Dialogs/ManageAccounts.qml'))
}

// -----------------------------------------------------------------------------

function updateSelectedEntry (view, props) {
  var item = mainLoader.item

  var menu = item.menu
  var timeline = item.timeline

}


