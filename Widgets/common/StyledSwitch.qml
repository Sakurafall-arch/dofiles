import qs.Common
import QtQuick
import QtQuick.Controls

/**
 * Material 3 switch. See https://m3.material.io/components/switch/overview
 */
Switch {
    id: root
    property real scale: 0.75
    implicitHeight: 32 * root.scale
    implicitWidth: 52 * root.scale
    property color activeColor: Appearance?.colors?.colPrimary ?? "#685496"
    property color inactiveColor: Appearance?.colors?.colSurfaceContainerHighest ?? "#45464F"

    // Custom track styling
    background: Rectangle {
        width: parent.width
        height: parent.height
        radius: Appearance?.rounding?.full ?? 9999
        color: root.checked ? root.activeColor : root.inactiveColor
        border.width: 2 * root.scale
        border.color: root.checked ? root.activeColor : Appearance?.m3colors?.m3outline ?? "#8a9296"

        Behavior on color {
            animation: Appearance.animation.elementMoveFast.colorAnimation.createObject(this)
        }
        Behavior on border.color {
            animation: Appearance.animation.elementMoveFast.colorAnimation.createObject(this)
        }
    }

    // Custom thumb styling
    indicator: Rectangle {
        width: (root.pressed || root.down) ? (28 * root.scale) : root.checked ? (24 * root.scale) : (16 * root.scale)
        height: (root.pressed || root.down) ? (28 * root.scale) : root.checked ? (24 * root.scale) : (16 * root.scale)
        radius: Appearance?.rounding?.full ?? 9999
        color: root.checked ? (Appearance?.m3colors?.m3onPrimary ?? "#FFFFFF") : (Appearance?.m3colors?.m3outline ?? "#8a9296")
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: root.checked ? ((root.pressed || root.down) ? (22 * root.scale) : 24 * root.scale) : ((root.pressed || root.down) ? (2 * root.scale) : 8 * root.scale)

        Behavior on anchors.leftMargin {
            NumberAnimation {
                duration: 350
                easing.type: Easing.BezierSpline
                easing.bezierCurve: [0.42, 1.67, 0.21, 0.9, 1, 1]
            }
        }
        Behavior on width {
            NumberAnimation {
                duration: 350
                easing.type: Easing.BezierSpline
                easing.bezierCurve: [0.42, 1.67, 0.21, 0.9, 1, 1]
            }
        }
        Behavior on height {
            NumberAnimation {
                duration: 350
                easing.type: Easing.BezierSpline
                easing.bezierCurve: [0.42, 1.67, 0.21, 0.9, 1, 1]
            }
        }
        Behavior on color {
            ColorAnimation {
                duration: 200
                easing.type: Easing.BezierSpline
                easing.bezierCurve: [0.34, 0.80, 0.34, 1.00, 1, 1]
            }
        }
    }
}
