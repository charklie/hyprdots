--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/charlie/.dotfiles/Pictures/wallpapers/colorful-planets.jpg"

-- Special
background="#0d0d12"
foreground="#b5def6"
cursor="#b5def6"

-- Colors
color0="#0d0d12"
color1="#FCA163"
color2="#B06D83"
color3="#D06F86"
color4="#F7758D"
color5="#678BB1"
color6="#79A2F5"
color7="#b5def6"
color8="#7e9bac"
color9="#FCA163"
color10="#B06D83"
color11="#D06F86"
color12="#F7758D"
color13="#678BB1"
color14="#79A2F5"
color15="#b5def6"
