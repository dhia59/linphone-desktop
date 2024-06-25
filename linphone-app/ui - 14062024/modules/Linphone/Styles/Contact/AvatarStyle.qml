pragma Singleton
import QtQml 2.2

import Units 1.0
import ColorsList 1.0

// =============================================================================

QtObject {
	property string sectionName: 'Avatar'
	property var backgroundColor: ColorsList.add(sectionName+'_bg', 'qq')
	property var backgroundDarkModeColor: ColorsList.add(sectionName+'_dark_bg', 'qq')
	
	
	property string personImage : 'contact_custom'
	
	property QtObject initials: QtObject {
		property var colorModel: ColorsList.add(sectionName+'_initials', 'q')
		property var darkModeColor: ColorsList.add(sectionName+'_dark_initials', 'd')
		property int pointSize: Units.dp * 10
		property int ratio: 30
	}
}
