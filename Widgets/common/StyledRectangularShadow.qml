import QtQuick
import QtQuick.Effects

/**
 * Drop shadow for a target item. Uses MultiEffect for a smooth shadow.
 * Falls back gracefully if RectangularShadow is not available.
 */
Item {
    id: root
    required property var target
    property real radius: 10
    property real blurAmount: 9
    property real xOffset: 0
    property real yOffset: 1
    property color shadowColor: "#B3000000"

    anchors.fill: target
    z: -1

    MultiEffect {
        id: shadowEffect
        source: root.target
        anchors.fill: parent
        anchors.leftMargin: root.xOffset
        anchors.topMargin: root.yOffset

        shadowEnabled: true
        shadowColor: root.shadowColor
        shadowBlur: root.blurAmount / 2
        shadowHorizontalOffset: 0
        shadowVerticalOffset: 0

        blurMax: 64
        blur: 0
    }
}
