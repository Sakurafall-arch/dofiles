# Sakurafall Dotfiles 🎴

自用arch配置（
集百家之长（用了JaKooLit/Arch-Hyprland shorin的dms niri StatIndet/dotfiles的quickshell）屎？
结合自己的t2 MacBook和习惯有所调整（如缩放）
本人现在为初三生，不懂事瞎搞的...

## 📦 需要的包 (Packages)

### 核心

| 包名 | 用途 |
|------|------|
| `niri` | Wayland 合成器 |
| `quickshell` | QML shell |
| `kitty` | 终端 |
| `rofi` | 启动器 |
| `wlogout` | 关机/重启菜单 |
| `swaylock` | 备用锁屏 |
| `Hyprpand` | Wayland 合成器

### 后台服务

| 包名 | 用途 |
|------|------|
| `swww` / `awww` | 壁纸守护进程 |
| `hypridle` | 空闲管理（息屏） |
| `fcitx5` | 输入法 |
| `polkit-gnome` | 权限认证代理 |
| `networkmanager` | 网络管理 |
| `blueman` | 蓝牙管理 |
| `nm-applet` | 网络托盘图标 |
| `clipse` | 剪贴板管理器 |

### 壁纸 & 主题

| 包名 | 用途 |
|------|------|
| `matugen` | 壁纸驱动配色 |
| `wallpicker` | 蜂窝壁纸选择器 (AUR) |
| `brightnessctl` | 亮度控制 |

### Clavis 插件 (Quickshell 模块)

下列包需**源码编译**安装到 `/usr/lib64/qt6/qml/Clavis/`：
- `Clavis.Niri` — Niri 工作区/窗口信息
- `Clavis.Sysmon` — 系统监控
- `Clavis.Weather` — 天气
- `Clavis.Media` — 媒体控制
- `Clavis.Audio` — 音量控制
- `Clavis.Keyboard` — 键盘状态（Caps Lock）

需要 Qt6 QML CMake，并依赖 `libpipewire` 和 `libcava`。

## 🔤 字体 (Fonts)

| 包名 | 用途 |
|------|------|
| `ttf-jetbrains-mono-nerd` | 等宽字体 |
| `ttf-jetbrains-maple-mono-nf-xx-xx` | 终端字体 (kitty) (AUR) |
| `ttf-fantasque-nerd` | 备用等宽字体 |
| `ttf-material-symbols-variable` | Material Symbols 图标 (Quickshell) |
| `otf-font-awesome` / `woff2-font-awesome` | Font Awesome 图标 |
| `ttf-jetbrains-mono` | 备选等宽 |

## 🛠️ 其他依赖

| 工具 | 用途 |
|------|------|
| `bash` | niri-force-kill 脚本 |
| `niri-force-kill` script | 强制杀死窗口（脚本在 `~/.local/bin/`） |
| `thunar` | 文件管理器 |
| `PAM` (系统内置) | Quickshell 锁屏密码认证 |

## ⚙️ T2 Mac 注意

- 内屏硬连 AMD 独显，Intel UHD 仅管外接
- 缩放设置 1.5x (2880×1800 屏幕)
- 睡眠功能已禁用（T2 芯片限制）
