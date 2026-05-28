import QtQuick
import QtQuick.Layouts
import QtQuick.Effects
import Quickshell
import qs.Common
import qs.Widgets.common

Item {
    id: root
    
    // 维持 36 的高度
    implicitHeight: 36
    implicitWidth: layout.width + 16

    Rectangle {
        id: bgRect
        anchors.fill: parent
        color: Appearance.colors.colLayer0
        radius: height / 2 
        visible: false 
    }

    MultiEffect {
        source: bgRect
        anchors.fill: bgRect
        shadowEnabled: true
        shadowColor: Qt.alpha(Appearance.colors.colShadow, 0.4)
        shadowBlur: 0.8
        shadowVerticalOffset: 3
    }

    RowLayout {
        id: layout
        anchors.centerIn: parent
        spacing: 8 
        
        Network {}
        Brightness {}
        Volume {}

        // ── 深色模式开关 ──
        // 需要和你的 matugen 配色脚本配合，当前先注释掉
        // StyledSwitch {
        //     Layout.alignment: Qt.AlignVCenter
        //     checked: Appearance.m3colors.darkmode
        //     onCheckedChanged: {
        //         Quickshell.execDetached(["bash", "-c",
        //             `~/.config/quickshell/scripts/theme/generate_quickshell_colors.sh --mode ${checked ? "dark" : "light"}`
        //         ])
        //     }
        // }

        SettingsButton {}
        PowerButton {}
    }
}
