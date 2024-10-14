import QtQuick 2.7
import QtQuick.Controls 2.2

import Common 1.0
import Common.Styles 1.0

// =============================================================================

Button {
  id: button

  property alias backgroundColor: background.color
  property alias textColor: textItem.color
  property alias radius: background.radius
  property int capitalization
  property alias pointSize: textItem.font.pointSize
  property alias textFormat: textItem.textFormat
  property bool isSelected: false
  width: 90
  background: Rectangle {
    id: background
    border.width: 1
    border.color: SmallButtonStyle.text.colorModelNormal.color
    color: isSelected ? SmallButtonStyle.background.color.pressed.color : SmallButtonStyle.background.color.normal.color
    implicitHeight: SmallButtonStyle.background.height
    radius: SmallButtonStyle.background.radius


  }
  contentItem: Text {
    id: textItem
    color: isSelected ?SmallButtonStyle.text.colorModelSelected.color:  SmallButtonStyle.text.colorModelNormal.color
    font.pointSize: SmallButtonStyle.text.pointSize
    font.weight: Font.Bold
    font.capitalization: button.capitalization
    horizontalAlignment: Text.AlignHCenter
    text: button.text
    verticalAlignment: Text.AlignVCenter
    leftPadding: SmallButtonStyle.leftPadding
    rightPadding: SmallButtonStyle.rightPadding
    
  }
  hoverEnabled: true
  MouseArea {
    id: mouseArea
    anchors.fill: parent
    onPressed:  mouse.accepted = false
  }
}
