import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import Clipboard 1.0
import Common 1.0
import Common.Styles 1.0
import Konami 1.0
import Linphone 1.0

import App.Styles 1.0

// =============================================================================
Rectangle {
    Column {
      anchors.fill: parent
      width: 200

        // Create a custom model
      PstnModel {
          id: model
      }

        // Use a custom delegate to display both display text and label text



      ComboBox  {
          width: 200
          model: model // Assuming you've set the model instance as a context property
          delegate: ItemDelegate {
                 width: parent.width

                 Row {
                     spacing: 10
                     Text {
                         text: model.display // Accessing DisplayRole
                     }
                     Text {
                         text: model.label   // Accessing LabelRole
                         font.italic: true
                     }
                 }
             }
      }
}
}
