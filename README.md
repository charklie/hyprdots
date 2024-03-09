# Hyprland - dotfiles

Many scripts are from JaKooLits Dotfiles, so huge credit goes to them for their incredible work. My Neovim config is from NVChad.
This is mostly for arch and distros based on it, these configs should work on other distrobrutions although I cannot guarentee it.

Before you install, read the **whole** README.md.

### Needed Packages:
- Git
- Curl
- Grim
- Swappy
- Slurp
- Wget
- Rofi (Wayland fork)
- Hyprland
- SwayNC
- Waybar
- Kitty
- Cava
- Btop
- NeoVim
- SwayLock
- Thunar file manager
- Fish + Oh My Fish
- NWG Displays
- Python 3
- Python Pip
    - pywal
    - requests
- Eza
- Swww
- Pipewire
- Mpv
- Nwg-look-bin
- Kvantum
- Wlogout
- Yad
- qt5ct
- qt6ct
- qt6-svg

###### Tip: to install pip packages, use the flag `--break-system-packages` to bypass you needing to install them with pacman instead.

### Needed Packages (Laptops only):
- Mousepad
- Brightnessctl

### Needed Fonts:
- adobe-source-code-pro-fonts 
- noto-fonts-emoji
- otf-font-awesome 
- ttf-droid 
- ttf-fira-code
- ttf-jetbrains-mono 
- ttf-jetbrains-mono-nerd

### Packages that may break the configurations:
- Dunst
- Mako
 
Automation, Hyprlock, Hyprcursor, Hypridle and more coming soon...

### Pre Installation
- Backup any configurations you plan on keeping.
- If you have wallpapers you want to use, move them to `~/Pictures/wallpapers/`

### Installation
- Clone the repository with `git clone https://github.com/charklie/hyprdots.git ~/.config/ --depth 1`, simple as that.
- **Hold down** `Super + Enter` **and run** `sh $HOME/.config/scripts/afterinstallation.sh` **to make all scripts executable and add yourself to the input group.** This is required for keybind and waybar functionality.
- Restart your computer.

### Post Installation
- Look through the help menu by holding down `MOD + H`
- Look through the fish config (if you are planning on staying with fish shell) in `~/.config/fish/config.fish` for aliases you may not be familiar with.
- Modify the apps listed on the waybar, Neovim theme, wallpaper, etc. all to your liking.   
- Modify the `~/.config/hypr/configs/ENVariables.conf` to your graphics cards needs.
- Have fun!

### Configuration
All keybindings are binded from `~/.config/hypr/hyprland.conf`

Apps started on startup can be edited from `~/.config/hypr/configs/Startup_Apps.conf`

Other Hyprland configurations are located within `~/.config/hypr/configs/UserSettings.conf`

### Screenshots / Previews:
![image](https://github.com/charklie/hyprdots/assets/157241212/2afd74d6-7497-40ba-9110-eb88fb0cf454)
![image](https://github.com/charklie/hyprdots/assets/157241212/7e8776a8-5a11-407a-8ef2-ee840293a3f9)

