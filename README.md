# Hyprland - dotfiles
**ATTENTION:** Most (if not all) scripts and some configs are made by [JaKooLit](https://github.com/JaKooLit) **huge** credit goes to them for their amazing work. I'd seriously recommend checking them out.

At this time, this most likely will not work so I would suggest just grabbing the configs you like and not installing all of it. Expect it to break.

Before you install, read the **whole** README.md.

Screenshots available at the bottom.

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
- Stow

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

### Recommended, but not needed:
- Tokyo night theme to match with all my configs, install from: https://www.gnome-look.org/p/1681315. Choose freely which one, although I recommend "BL-LB".

### Pre Installation

- Backup any configurations you plan on keeping. `mv ~/.config/<config> ~/.config/<config>.bkp`
- If you have wallpapers you want to use, move them to `~/Pictures/wallpapers/`
- Install packages
- Restart your computer to ensure no apps are interfering with installation

### Full Installation 

- Clone the repository with `git clone https://github.com/charklie/hyprdots.git ~/.dotfiles/ --depth 1`
- CD into the directory: `cd ~/.dotfiles/`
- If you want to install *all* configs: `stow .`
- If you want to install a specific config:
    - CD into directory of config: e.g. `cd ~/.dotfiles/Pictures/wallpapers/`
    - Stow: `stow .`
- Run `sh $HOME/.config/scripts/afterinstallation.sh` to make all scripts executable and add yourself to the input group. **This is required for keybind and waybar functionality.**
- Restart your computer.

### Post Installation

- Look through the help menu by holding down `Super + H`
- Change keyboard layout in `~/.config/hypr/configs/UserSettings.conf` around line 85.
- Check if Rofi theme is working; open Rofi with `Super`. If Rofi has that disgusting yellow color, search for "Rofi Theme Selector". Open it and scroll to the bottom where you'll find "simple-dark". Click `Super` and then `Alt + A`.
- Look through the fish config (if you are planning on staying with fish shell) in `~/.config/fish/config.fish` for aliases you may not be familiar with.
- Modify the apps listed on the waybar, Neovim theme, wallpaper, etc. all to your liking.
- Modify city in `~/.config/waybar/scripts/weather.py` for waybar weather module.
- Modify the `~/.config/hypr/configs/ENVariables.conf` to your graphics cards needs.
- Have fun!

### Configuration 

Many files and configurations are interconnected, this means that if you rename a folder or file, it may break something. If you are planning to remove scripts, folders, files, etc. proceed with caution.

All keybindings are binded from `~/.config/hypr/hyprland.conf`

Apps started on startup can be edited from `~/.config/hypr/configs/Startup_Apps.conf`

Other Hyprland configurations are located within `~/.config/hypr/configs/UserSettings.conf`

As mentioned before, wallpapers should be stored in `Pictures/wallpapers/`

### Screenshots / Previews:

![image](https://github.com/charklie/hyprdots/assets/157241212/628f0f7e-8dac-492f-8ea1-044d0cb69607)
![image](https://github.com/charklie/hyprdots/assets/157241212/4f55d0a8-4aa7-4c49-82e5-0c718eea57e3)
![image](https://github.com/charklie/hyprdots/assets/157241212/9ebccd44-dec1-449d-8798-89cb8e64444b)
![image](https://github.com/charklie/hyprdots/assets/157241212/f961149e-fa59-47af-8914-c60d0e3e3f3d)
![image](https://github.com/charklie/hyprdots/assets/157241212/87c6b520-9298-4811-bb5b-74939bf97409)
![image](https://github.com/charklie/hyprdots/assets/157241212/43f9b4c0-1b01-4d0c-8ecb-5eee130a4d80)
![image](https://github.com/charklie/hyprdots/assets/157241212/69ffa94a-a8a4-45d7-9182-b3be3ae52da4)

##### Todo (#todo)
- [ ] Hyprcursor
- [ ] Hypridle
- [ ] Hyprlock
- [ ] ~~Automatic install script~~
- [X] Switch to stow for easier installation
