import QtQuick 2.7
import QtQuick.Layouts 1.3

import Common 1.0
import Common.Styles 1.0

import 'FormField.js' as Logic

// =============================================================================

RowLayout {
    id: formField
	
	// ---------------------------------------------------------------------------
	
	property alias placeholder: placeholder.text
	property alias title: text.text
	property bool readOnly: false
	property int inputMethodHints
	property var minValues
    property alias value:textInput.text
	readonly property int count: values.count
	property var tcolor
	
	// ---------------------------------------------------------------------------
	
	signal changed (int index, string oldValue, string newValue)
	signal removed (int index, string value)
	
	// ---------------------------------------------------------------------------
    function setValue(val){
        value= val
    }

	function setData () {
		Logic.setData.apply(this, arguments)
	}
	
	function setInvalid () {
		Logic.setInvalid.apply(this, arguments)
	}
	
	function updateValue () {
		Logic.updateValue.apply(this, arguments)
	}
	
	// ---------------------------------------------------------------------------
	
	spacing: 0
	
	// ---------------------------------------------------------------------------
	// Title area.
	// ---------------------------------------------------------------------------
	
	RowLayout {
		Layout.alignment: Qt.AlignTop
		Layout.preferredHeight: ListFormStyle.lineHeight
        spacing: ListFormStyle.titleArea.spacing

        ActionButton {
            id: addButton

            colorSet: ListFormStyle.titleArea.add
            isCustom: true
            backgroundRadius: 90

            opacity:  0


        }
		Text {
			id: text
			
			Layout.preferredWidth: ListFormStyle.titleArea.text.width
			color: tcolor ? tcolor :ListFormStyle.titleArea.text.colorModel.color
			elide: Text.ElideRight
			
			font {
				bold: true
				pointSize: ListFormStyle.titleArea.text.pointSize
			}
		}
	}
	
	// ---------------------------------------------------------------------------
	// Placeholder.
	// ---------------------------------------------------------------------------
	
	Text {
		id: placeholder
		
		Layout.fillWidth: true
		Layout.preferredHeight: ListFormStyle.lineHeight
		color: ListFormStyle.value.placeholder.colorModel.color
		
		font {
			italic: true
			pointSize: ListFormStyle.value.placeholder.pointSize
		}
		
		padding: ListFormStyle.value.text.padding
        visible: value.length >0
		verticalAlignment: Text.AlignVCenter
		
		MouseArea {
			anchors.fill: parent
			onClicked: !listForm.readOnly && Logic.addValue('')
		}
	}
	
	// ---------------------------------------------------------------------------
	// Values.
	// ---------------------------------------------------------------------------
	

    TransparentTextInput {
        id: textInput

        inputMethodHints: listForm.inputMethodHints
        isInvalid: $isInvalid
        readOnly: listForm.readOnly
        text: ""

        height: ListFormStyle.lineHeight
        width: parent.width

        Component.onCompleted: Logic.handleItemCreation.apply(this)

        onEditingFinished: Logic.handleEditionFinished(index, text)
    }
}
