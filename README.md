# papirus-folders-gui
papirus-folders-gui is a graphical user interface for papirus-folders, this program change the folders color of Papirus

Note: This project doesn't provide any folder icons
## Table of contents

- [Dependencies](#dependencies)
- [papirus-folder installation](#papirus-folder-installation)
- [Installation](#installation)
    - [Git clone]( #git-clone)
    - [download and compile](#download-and-compile)
    - [premaked builds](#premaked-build)
    - [AUR](#aur)
- [Usage](#usage)
    - [Color Change](#color-change)
    - [Kill File manager](#kill-file-manager)

## dependencies
  These dependencies correspond to Arch Linux, in other operating systems the dependencies may have another name
     
   - qt5-base
   
   - cmake 

   - polkit-gnome( one is already included in most desktop environments, but no in most window manager)

   - papirus-folders

   AUR site for more info: <a href=”url”>https://aur.archlinux.org/packages/papirus-folders-gui/</a>
## papirus-folder installation
 You can download papirus folder on <a href=”url”>https://github.com/PapirusDevelopmentTeam/papirus-folders#installation</a>
 
 ## installation
   ### Git clone
   You can install papirus-folders-gui on your system with next steps.
       
   First clone the git 
  ```
git clone https://github.com/ItzSelenux/papirus-folders-gui
```
  then go to the code folder
  ```
  cd ./papirus-folders-gui
  ```
  run the following commands
  ```
  cmake .
  ```
  ```
  make
  ```
  ### Download and compile
   you can download the code and compile with next steps
    
   First Download the code as zip and and unzip the zip
   then open a terminal in the source folder an run make
  ### Premaked build
   you can download a premaked build (papirus-folders-gui) and run!
   ### AUR
  if you are an Arch Linux (or derived) user, you can install Papirus folders GUI from the AUR, you need an AUR helper just like Paru, Yay, Pamac, Etc
    
 ## Usage
  ### Color change
  Select a color from the list, when you do, a window will appear where you will have to put your Root password, when you have entered the password, 
  restart your file explorer (you can use "Kill File Manager" button), and you will see your folders from the color you selected
   
  ## Kill File manager
   if you want to kill the file manager to see the changes, you can use the "Kill File manager" button
   actually this file managers was supported:
   - Caja (Mate file manager)
   - Dolphin (Plasma file manager)
   - Nautilus (Gnome file manager)
   - Nemo (Cinnamon file manager)
   - PCmanFM (Lxde file manager)
   - SpaceFM (independent)
   - Thunar (Xfce file manager)

   Note: If your desktop disappeared, please logout and re-login to fix the problem
