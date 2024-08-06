import QtQuick 2.7

import Common 1.0
import Linphone 1.0
import UtilsCpp 1.0
import LinphoneEnums 1.0

import Linphone.Styles 1.0

// =============================================================================

SearchBox {
	id: searchBox
	
	// ---------------------------------------------------------------------------
	
	readonly property alias isOpen: searchBox._isOpen
   property alias header : view.headerItem
   property alias actions : view.actions
    property alias showHeader : view.showHeader
	property alias participantListModel : searchModel.participantListModel

	function addAddressToIgnore(entry){
		searchModel.addAddressToIgnore(entry)
	}
	
	function removeAddressToIgnore(entry){
		searchModel.removeAddressToIgnore(entry)
	}
	
	function isIgnored(address){
		return searchModel.isIgnored(address)
	}
	property var resultExceptions : []
	
	// ---------------------------------------------------------------------------
	
	signal addContact (string sipAddress)
	signal launchChat (string sipAddress)
	signal launchSecureChat (string sipAddress)
	signal launchCall (string sipAddress)
	signal launchVideoCall (string sipAddress)
	
	signal entryClicked (var entry)
	
	// ---------------------------------------------------------------------------
	
	entryHeight: SipAddressesViewStyle.entry.height
	
	// ---------------------------------------------------------------------------
	
	onEnterPressed: {
		var sipAddress = view.interpretableSipAddress
		return sipAddress.length > 0 && SettingsModel.outgoingCallsEnabled && searchBox.launchCall(sipAddress)
	}
	
	// ---------------------------------------------------------------------------
	
    SipAddressesAutoCompleteView {
		id: view		
        headerButtonDescription: qsTr('Choisir')
        headerButtonIcon: 'contact_add_custom'
		headerButtonOverwriteColor: SipAddressesViewStyle.header.button.colorModel.color
        headerButtonAction: SettingsModel.contactsEnabled && (function (sipAddress) {
            console.log("tooooo ", sipAddress)
			searchBox.closeMenu()
			searchBox.addContact(sipAddress)
		})
		
		genSipAddress: searchBox.filter
		
		model: SearchSipAddressesProxyModel {
			id:searchModel
		}
		
		onEntryClicked: {
			searchBox.entryClicked(entry)            
			searchBox.closeMenu()
		}
	}
}
