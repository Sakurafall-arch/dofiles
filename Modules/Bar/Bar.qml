import Quickshell
import Quickshell.Widgets
import Quickshell.Wayland
import QtQuick
import QtQuick.Layouts
import qs.Modules.Bar
import qs.Modules.Bar.Workspaces
import qs.Modules.Bar.ActiveWindow
import qs.Modules.Bar.Tray
import qs.Modules.Bar.PowerButton
import qs.Modules.Bar.SysMonitor
import qs.Modules.Bar.QuickSettings
import qs.Common
import qs.Widgets.common
import qs.Components

Variants {
    model: Quickshell.screens

    PanelWindow {
        id: barWindow
        required property var modelData
        screen: modelData

        anchors { left: true; top: true; right: true }
        color: "transparent"
        
        property real barHeight: Sizes.barHeight
        
        // 高度不再受灵动岛影响
        implicitHeight: barWindow.barHeight
        
        exclusiveZone: barHeight
        
        WlrLayershell.layer: WlrLayer.Top

        mask: Region {
            Region { item: leftInputRegion }
            Region { item: rightInputRegion }
        }

        // --- 内容容器 ---
        Item {
            id: barContent
            
            anchors { top: parent.top; left: parent.left; right: parent.right }
            height: barWindow.barHeight 

            // --- 左侧组件 ---
            RowLayout {
                id: leftSection
                anchors { left: parent.left; leftMargin: 10; bottom: parent.bottom }
                width: implicitWidth
                height: implicitHeight
                spacing: 10

                // Arch Linux logo
                RippleButton {
                    implicitWidth: 32
                    implicitHeight: 32
                    buttonRadius: height / 2
                    buttonRadiusPressed: height / 2
                    colBackground: Appearance.colors.colLayer0
                    colBackgroundHover: Appearance.colors.colLayer1Hover
                    colRipple: Appearance.colors.colPrimary

                    contentItem: Item {
                        Text {
                            anchors.centerIn: parent
                            text: "\uf303"
                            font.family: Sizes.fontFamilyMono
                            font.pixelSize: 18
                            color: Appearance.colors.colOnSurface
                        }
                    }

                    onPressed: Quickshell.execDetached(["rofi", "-show", "run"])
                }

                Workspaces { screenName: barWindow.screen.name }
                SidebarButton {}
                ActiveWindow {}
                
            }

            // --- 右侧组件 ---
            RowLayout {
                id: rightSection
                anchors { right: parent.right; rightMargin: 10; bottom: parent.bottom }
                width: implicitWidth
                height: implicitHeight
                spacing: 10

                Tray {}
                SysMonitor { Layout.alignment: Qt.AlignVCenter }
                BatteryIndicator { Layout.alignment: Qt.AlignVCenter }

                QuickSettings { Layout.alignment: Qt.AlignVCenter }
                
                
            }

            Item {
                id: leftInputRegion
                anchors.left: leftSection.left
                anchors.right: leftSection.right
                anchors.top: leftSection.top
                anchors.bottom: leftSection.bottom
            }

            Item {
                id: rightInputRegion
                anchors.left: rightSection.left
                anchors.right: rightSection.right
                anchors.top: rightSection.top
                anchors.bottom: rightSection.bottom
            }
        }
    }
}
