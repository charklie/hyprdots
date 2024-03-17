#!/bin/bash

# Get username
username=$(whoami)

# Make scripts executable (required for all keybindings to work)
for file in ./*.sh; do
    if [ -x "$file" ]; then
        sudo chmod +r,+x $file
        echo "$file has been made executabe."
    fi
done

# Add user to 'input' groups (required for waybar functionality)
if groups $username | grep &>/dev/null '\binput\b'; then
    echo "User $username is already in the input group."
else
    # Add the user to the "input" group
    sudo usermod -aG input $username
    echo "User $username has been added to the input group."
fi

# Create symlink to this folder.
ln -s ~/.config/scripts/ ~/.config/hypr

