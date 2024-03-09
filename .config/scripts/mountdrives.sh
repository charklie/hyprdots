#!/bin/bash

echo "Mounting WDC drive to /home/chararch/WDCDrive...."
mount /dev/sdc1 /home/chararch/WDCDrive
echo "Done mounting WDC drive!"
echo "Mounting NVME to /home/chararch/WindowsNVME...."
ntfs-3g /dev/nvme0n1p4 /home/chararch/WindowsNVME/
echo "Done mounting NVME!"
echo "Mounting ST2000 drive...."
ntfs-3g /dev/sdb3 /home/chararch/ST2000Drive/
echo "Done mounting ST2000 drive!"


fdisk -l | grep -q "/dev/sdd"

if [ $? -eq 0 ]; then
  echo "Found thumbdrive, mounting to /home/chararch/thumbdrive...."
  mount /dev/sdd /home/chararch/thumbdrive/
  echo "Done mounting thumbdrive!"
fi
