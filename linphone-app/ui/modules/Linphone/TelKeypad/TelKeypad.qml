import QtQuick 2.7
import QtQuick.Layouts 1.3

import Common 1.0
import Linphone.Styles 1.0

import 'TelKeypad.js' as Logic

// =============================================================================

Rectangle {
	id: telKeypad
	property bool showHistory: false
	property var container: parent
	property var call
	signal sendDtmf(var dtmf)
	signal keyPressed(var event)
    signal callClick(var dtmf)
    signal sipAddressClicked (string sipAddress)
    property bool clicked: false
    property bool containsMouse: false
    function open () {
        telKeypad.popup()
    }
    function close(){
        telKeypad.close()
    }
	color: TelKeypadStyle.colorModel.color   // useless as it is overridden by buttons color, but keep it if buttons are transparent
    onActiveFocusChanged: {if(activeFocus) selectedArea.border.width=TelKeypadStyle.selectedBorderWidth; else selectedArea.border.width=0}
	Keys.onPressed: keyPressed(event)
	layer {
		effect: PopupShadow {}
		enabled: true
	}
	
	height: TelKeypadStyle.height + (showHistory ? history.contentHeight : 0)
	width: TelKeypadStyle.width
	radius:TelKeypadStyle.radius+1.0 // +1 for avoid mixing color with border slection (some pixels can be print after the line)
	onVisibleChanged: if(visible) telKeypad.forceActiveFocus()

	// ---------------------------------------------------------------------------
	MouseArea{
			anchors.fill:parent
            onClicked:{telKeypad.forceActiveFocus()
               // console.log
           }
    }
    //onActiveFocusChanged:{}
	ColumnLayout {
		anchors.fill: parent
		anchors.topMargin: TelKeypadStyle.rowSpacing+5
		anchors.bottomMargin: TelKeypadStyle.rowSpacing+5
		anchors.leftMargin: TelKeypadStyle.columnSpacing+5
		anchors.rightMargin: TelKeypadStyle.columnSpacing+5

		Text{
			id: history
			Layout.preferredWidth: parent.width
			Layout.preferredHeight: implicitHeight
			color: 'white'
			
			font {
				bold: true
				pointSize: TelKeypadStyle.button.text.pointSize
			}
			
			wrapMode: Text.WrapAnywhere
			horizontalAlignment: Qt.AlignCenter
			visible: showHistory
			MouseArea{
				anchors.fill: parent
                onClicked: {parent.text = ''}
			}
		}
		
		GridLayout {
			id: grid
			Layout.topMargin: TelKeypadStyle.rowSpacing+5
			
            columns: 3 // Not a style.
            rows: 4 // Same idea.
			
			columnSpacing: TelKeypadStyle.columnSpacing
			rowSpacing: TelKeypadStyle.rowSpacing
			
			Repeater {
				model: [
                    '1', '2', '3',
                    '4', '5', '6',
                    '7', '8', '9',
                    '*', '0', '#'

				]
				
				TelKeypadButton {
					id: telKeypadButton
					property var _timeout
					showVoicemail: index === 0
					auxSymbol: index === 13 ? '+' : ''
					
					Layout.fillHeight: true
					Layout.fillWidth: true
					
					text: modelData
					onSendDtmf: {
						telKeypad.forceActiveFocus()
                        //if(dtmf==='call') onSipAddressClicked(history.text)
						if(telKeypad.call) telKeypad.call.sendDtmf(dtmf) 
						telKeypad.sendDtmf(dtmf)
						if(showHistory)
							history.text += dtmf
					}
					Connections{
						target: telKeypad
						onKeyPressed: telKeypadButton.activateEvent(event.key)
					}

				}
			}
		}
	}
	
	// ---------------------------------------------------------------------------
	
	Rectangle{
		id: selectedArea
		anchors.fill:parent
		color:"transparent"
		border.color:TelKeypadStyle.selectedColor.color
		border.width:0 
		focus:false
		enabled:false
		radius:TelKeypadStyle.radius
        MouseArea{
            anchors.fill: parent

        }
}
}
