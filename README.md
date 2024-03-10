# Hyprland - dotfiles
**ATTENTION:** Most (if not all) scripts and some configs are made by [JaKooLit](https://github.com/JaKooLit) **huge** credit goes to them for their amazing work. I'd seriously recommend checking them out.

At this time, this most likely will not work so I would suggest just grabbing the configs you like and not installing all of it. Expect it to break.

Before you install, read the **whole** README.md.

### Needed Packages:
- Starship Prompt
- Zoxide
- Thefuck
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

### Pre Installation
- Backup any configurations you plan on keeping.
- If you have wallpapers you want to use, move them to `~/Pictures/wallpapers/`
- Install packages
- Restart your computer to ensure no apps are interfering

### Full Installation
- Clone the repository with `git clone https://github.com/charklie/hyprdots.git ~/ --depth 1`, simple as that.
- **Hold down** `Super + Enter` **and run** `sh $HOME/.config/scripts/afterinstallation.sh` **to make all scripts executable and add yourself to the input group.** This is required for keybind and waybar functionality.
- Restart your computer.

### Post Installation
- Open Rofi with `Super` and search for "Rofi Theme Selector". Open it and scroll to the bottom where you'll find "simple-dark". Click `Super` and then `Alt + A`.
- Look through the help menu by holding down `Super + H`
- Look through the fish config (if you are planning on staying with fish shell) in `~/.config/fish/config.fish` for aliases you may not be familiar with.
- Modify the apps listed on the waybar, Neovim theme, wallpaper, etc. all to your liking.   
- Modify the `~/.config/hypr/configs/ENVariables.conf` to your graphics cards needs.
- Have fun!

### Configuration
Many files and configurations are interconnected, this means that if you rename a folder or file, it may break something. If you are planning to remove scripts, folders, files, etc. proceed with caution.

All keybindings are binded from `~/.config/hypr/hyprland.conf`

Apps started on startup can be edited from `~/.config/hypr/configs/Startup_Apps.conf`

Other Hyprland configurations are located within `~/.config/hypr/configs/UserSettings.conf`

As mentioned before, wallpapers should be stored in `Pictures/wallpapers/`

### Screenshots / Previews:
![image](https://github.com/charklie/hyprdots/assets/157241212/2afd74d6-7497-40ba-9110-eb88fb0cf454)
![image](https://github.com/charklie/hyprdots/assets/157241212/7e8776a8-5a11-407a-8ef2-ee840293a3f9)

##### Todo
- [ ] Hyprcursor
- [ ] Hypridle
- [ ] Hyprlock
- [ ] Automatic install script
