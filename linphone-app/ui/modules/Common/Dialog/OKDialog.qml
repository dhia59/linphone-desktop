import QtQuick.Layouts 1.3

import Common 1.0
import Common.Styles 1.0


// =============================================================================
// A dialog with OK/Cancel buttons.
// =============================================================================

DialogPlus {
	id: mainItem
	property int showButtonOnly : -1
    property var buttonTexts : [qsTr('Ok')]
	buttons: [

		TextButtonB {
            text: mainItem.buttonTexts[0]
			visible: mainItem.showButtonOnly<0 || mainItem.showButtonOnly == 1
			onClicked: exit(1)
        }
	]
	
	buttonsAlignment: Qt.AlignCenter
	
	height: DialogStyle.confirmDialog.height + 30
	width: Math.max(DialogStyle.confirmDialog.width, buttonTexts.length * 150 + DialogStyle.buttons.leftMargin + DialogStyle.buttons.rightMargin)
}
