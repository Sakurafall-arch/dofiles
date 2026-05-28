import QtQuick
import Quickshell
import Quickshell.Io
import Clavis.Weather 1.0
import qs.Modules.Bar
import qs.Modules.DynamicIsland
import qs.Modules.Launcher
import qs.Modules.Lock
import qs.Modules.Sidebars.Left
import qs.Modules.Sidebars.Right

Item {
    id: root

    Component.onCompleted: {
        WeatherPlugin.setManualLocation(30.5928, 114.3055, "Wuhan");
    }

    Bar {}

    DynamicIsland {}

    LeftSidebarWindow {}

    RightSidebar {}

    LockWarmup {}

    Lock {
        id: sessionLocker
    }

    IpcHandler {
        target: "lock"

        function open() {
            return sessionLocker.open();
        }

        function isLocked() {
            return sessionLocker.isLocked();
        }
    }

    LauncherWindow {
        id: rofiLauncher
    }

    IpcHandler {
        target: "launcher"

        function toggle() {
            rofiLauncher.toggleWindow();
            return "LAUNCHER_TOGGLED";
        }
    }

    // ── IPC 快捷键（在 Niri config 里绑定按键调用） ──
    // 示例 Niri 配置：
    //   Mod+D => quickshell-ipc launcher:toggle
    //   Mod+Shift+D => quickshell-ipc theme:toggleDarkMode

    IpcHandler {
        target: "theme"

        function toggleDarkMode() {
            var isDark = Appearance.m3colors.darkmode
            Quickshell.execDetached(["bash", "-c",
                `~/.config/quickshell/scripts/theme/generate_quickshell_colors.sh --mode ${isDark ? "light" : "dark"}`
            ])
            return isDark ? "LIGHT" : "DARK"
        }
    }
}
