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
}
