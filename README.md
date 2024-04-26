# Hyprland - dotfiles
**ATTENTION:** Most (if not all) scripts and some configs are made by [JaKooLit](https://github.com/JaKooLit) **huge** credit goes to them for their amazing work. I'd seriously recommend checking them out.

### Screenshots
![image](https://github.com/charklie/hyprdots/assets/157241212/3557494d-f83f-4b2a-9963-8eb740e3543e)
![image](https://github.com/charklie/hyprdots/assets/157241212/bde6d3a0-d2f9-42a1-9fe7-7738c85a0e5c)
![image](https://github.com/charklie/hyprdots/assets/157241212/d1590cfd-0a8a-4658-8638-cc79fe89aab2)
![image](https://github.com/charklie/hyprdots/assets/157241212/9a671fca-95d2-4b32-b1ed-1244c7e247e0)
![image](https://github.com/charklie/hyprdots/assets/157241212/6ef0918d-576d-4b1d-85cc-6f5083ef8902)
![image](https://github.com/charklie/hyprdots/assets/157241212/a060f3ce-cf2a-4ade-a7f5-2cd21cee2d8a)
![image](https://github.com/charklie/hyprdots/assets/157241212/f6015c94-5cc7-4279-a035-74b8ab6ad41c)

### Needed Packages:
- Zoxide
- Bat
- Vesktop*
- Thefuck
- Grim
- Swappy
- Slurp
- Rofi (Wayland fork)
- Hyprlock
- SwayNC
- Waybar
- Kitty*
- Alacritty
- Cava*
- Btop*
- Neovim*
- Helix*
- SwayLock
- Thunar file manager
- Fish + Oh my fish
- Python 3
- python-pywal
- python-requests
- Eza
- Swww
- Kvantum
- Wlogout
- Yad
- Stow

_Packages marked with a * are optional, configs are available but wont break the system if not installed._

### Needed Packages (Laptops only):

- Mousepad
- Brightnessctl

### Recommended, but not needed:
- Tokyo night GTK theme, install from: https://www.gnome-look.org/p/1681315. Choose freely which one, although I recommend "BL-LB".

### Pre Installation

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
- Run `sh $HOME/.config/scripts/afterinstallation.sh` to make all scripts executable and add yourself to the input group. **This is required for Hyprland keybind and waybar functionality.**
- Restart your computer.

### Post Installation

- Look through the help menu by holding down `Super + H`
- Change keyboard layout in `~/.config/hypr/configs/UserSettings.conf` around line 85.
- Check if Rofi theme is working; open Rofi with `Super`. If Rofi has that disgusting yellow color, search for "Rofi Theme Selector". Open it and scroll to the bottom where you'll find "simple-dark". Click `Enter` and then `Alt + A`.
- Look through the fish config (if you are planning on staying with fish shell) in `~/.config/fish/config.fish` for aliases you may not be familiar with.
- Modify the apps listed on the waybar, Neovim theme, wallpaper, etc. all to your liking.
- Set preferred browser at the top of `~/.config/hypr/hyprland.conf`
- Modify city in `~/.config/waybar/scripts/weather.py` for waybar weather module.
- Modify the `~/.config/hypr/configs/ENVariables.conf` to your graphics cards needs.
- Have fun!

### Configuration 

Many files and configurations are interconnected, this means that if you rename a folder or file, it may break something. If you are planning to remove scripts, folders, files, etc. proceed with caution.

All keybindings are binded from `~/.config/hypr/hyprland.conf`

Apps started on startup can be edited from `~/.config/hypr/configs/Startup_Apps.conf`

Other Hyprland configurations are located within `~/.config/hypr/configs/UserSettings.conf`

As mentioned before, wallpapers should be stored in `Pictures/wallpapers/`

##### Todo (#todo)
- [ ] Hyprcursor
- [ ] Hypridle
- [X] Hyprlock
- [X] Switch to stow for easier installation
