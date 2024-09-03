import QtQuick 2.7
import QtQuick.Layouts 1.3

import Common 1.0
import Linphone 1.0
import ConstantsCpp 1.0

import App.Styles 1.0

import QtGraphicalEffects 1.12
import Utils 1.0
import UtilsCpp 1.0
// =============================================================================

ColumnLayout {
    spacing: 0

    /*Image {
              source: "qrc:/assets/images/appBackground.png"
              anchors.fill: parent
              anchors.centerIn: parent
              width: 50
              height: 50
              fillMode: Image.PreserveAspectCrop

          }*/


    Item {
        property var iconSize:50 // Required.
        property int iconHeight: 0	// Or this
        property int iconWidth: 0	//	<-- too

        property string icon
        property color overwriteColor
        property alias horizontalAlignment: image.horizontalAlignment
        property alias verticalAlignment: image.verticalAlignment
        property alias fillMode: image.fillMode


        height: 50
        width: 50

        Image {
            id:image
            anchors.fill: parent

            property bool colorOverwriteEnabled : false
            mipmap: SettingsModel.mipmapEnabled
            cache: Images.areReadOnlyImages
            asynchronous: true
            smooth: true
            antialiasing: false
    // Better quality is only available from Qt5.15
            fillMode: !qtIsNewer_5_15_0 ? Image.PreserveAspectFit : Image.Stretch // Stretch is default from Qt's doc
            // Keep aspect ratio is done by ImagePovider that use directly SVG scalings (=no loss quality).
            source: width != 0 && height != 0 ?  Utils.resolveImageUri('qrc:/assets/images/appBackground.png') : ''	// Do not load image with unknown requested size
            sourceSize.width: qtIsNewer_5_15_0
                                ? fillMode == Image.TileHorizontally
                                    ? height
                                    : width
                                : 0
            sourceSize.height: qtIsNewer_5_15_0
                                ? fillMode == Image.TileVertically
                                    ? width
                                    : height
                                : 0

            layer {
                enabled: image.colorOverwriteEnabled
                effect: ColorOverlay {
                    color: mainItem.overwriteColor
                }
            }
        }
    }


}
