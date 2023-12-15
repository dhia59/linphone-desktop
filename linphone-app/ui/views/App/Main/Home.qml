import QtQuick 2.7

import Common 1.0
import Linphone 1.0
import Linphone.Styles 1.0
import Utils 1.0

import App.Styles 1.0

// =============================================================================

Rectangle {
  color: HomeStyle.colorModel.color

  // TODO: Remove me when smart tooltip will be available.
  Component {
    Item {
      property var i18n: [
        QT_TR_NOOP('showTooltips'),
        QT_TR_NOOP('howToDescription'),
        QT_TR_NOOP('howToTitle')
      ]
        Text {
            id: name
            text: "Bonjour"
        }
    }
  }

}
