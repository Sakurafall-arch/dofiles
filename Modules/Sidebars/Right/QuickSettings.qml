import QtQuick
import QtQuick.Layouts
import qs.Common
import qs.Widgets.common
import qs.Modules.Sidebars.Right

Item {
    id: root

    Item {
        anchors.fill: parent
        
        NetworkContent { 
            anchors.fill: parent 
            
            opacity: WidgetState.qsView === "network" ? 1.0 : 0.0
            scale: WidgetState.qsView === "network" ? 1.0 : 0.95
            visible: opacity > 0
            
            Behavior on opacity { NumberAnimation { duration: 200; easing.type: Easing.OutQuint } }
            Behavior on scale { NumberAnimation { duration: 250; easing.type: Easing.OutBack; easing.overshoot: 0.5 } }
        }

        AudioContent { 
            anchors.fill: parent 
            
            opacity: WidgetState.qsView === "audio" ? 1.0 : 0.0
            scale: WidgetState.qsView === "audio" ? 1.0 : 0.95
            visible: opacity > 0
            
            Behavior on opacity { NumberAnimation { duration: 200; easing.type: Easing.OutQuint } }
            Behavior on scale { NumberAnimation { duration: 250; easing.type: Easing.OutBack; easing.overshoot: 0.5 } }
        }

        SettingsContent {
            anchors.fill: parent

            opacity: WidgetState.qsView === "settings" ? 1.0 : 0.0
            scale: WidgetState.qsView === "settings" ? 1.0 : 0.95
            visible: opacity > 0

            Behavior on opacity { NumberAnimation { duration: 200; easing.type: Easing.OutQuint } }
            Behavior on scale { NumberAnimation { duration: 250; easing.type: Easing.OutBack; easing.overshoot: 0.5 } }
        }

        SettingsPane {
            anchors.fill: parent

            opacity: WidgetState.qsView === "settingspane" ? 1.0 : 0.0
            scale: WidgetState.qsView === "settingspane" ? 1.0 : 0.95
            visible: opacity > 0

            Behavior on opacity { NumberAnimation { duration: 200; easing.type: Easing.OutQuint } }
            Behavior on scale { NumberAnimation { duration: 250; easing.type: Easing.OutBack; easing.overshoot: 0.5 } }
        }

        // ── 电池详情 ──
        BatteryContent {
            anchors.fill: parent

            opacity: WidgetState.qsView === "battery" ? 1.0 : 0.0
            scale: WidgetState.qsView === "battery" ? 1.0 : 0.95
            visible: opacity > 0

            Behavior on opacity { NumberAnimation { duration: 200; easing.type: Easing.OutQuint } }
            Behavior on scale { NumberAnimation { duration: 250; easing.type: Easing.OutBack; easing.overshoot: 0.5 } }
        }
    }
}
