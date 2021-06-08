# papirus-folders-gui
papirus-folders-gui is a graphical user interface for papirus-folders, this program change the folders color of Papirus

Notes: This project doesn't provide any folder icons

for this program to work it is necessary that you have installed papirus-folders-gui on your PC

for this program to work it is necessary that you have installed pkexec on your PC

## Table of contents

- [dependencies](#dependencies)
- [papirus-folder installation](#papirus-folder-installation)
- [Installation](#installation)
    - [Git clone]( #git-clone)
    - [download and compile](#download-and-compile)
    - [premaked builds](#premaked-build)
- [Usage](#usage)
    - [Color Change](#color-change)
    - [Colors preview](#colors-preview)
    - [Kill File manager](#kill-file-manager)

## dependencies
  These dependencies correspond to Arch Linux, in other operating systems the dependencies may have another name
     - qt5-base

     - polkit-gnome( one is already included in most desktop environments, but no in most window manager)

     - papirus-folders

   AUR site for more info: <a href=”url”>https://aur.archlinux.org/packages/papirus-folders-gui/</a>
## papirus-folder installation
 You can download papirus folder on <a href=”url”>https://github.com/PapirusDevelopmentTeam/papirus-folders</a>
 
 ## installation
   ### Git clone
   You can install papirus-folders-gui on your system with next steps.
       
   First clone the git 
  ```
git clone https://github.com/ItzSelenux/papirus-folders-gui
```
  then go to the code folder
  ```
  cd ./papirus-folders-gui/papirus-folders-gui
  ```
  Finally run make command
  ```
  make
  ```
  ### Download and compile
   you can download the code and compile with next steps
    
   First Download the code as zip and and unzip the zip
   then open a terminal in the source folder an run make
  ### Premaked build
   you can download a premaked build (papirus-folders-gui) and run!
    
 ## Usage
  ### Color change
  Select a color from the list, when you do, a window will appear where you will have to put your Root password, when you have entered the password, 
  restart your file explorer (it is recommended to kill the process with the task manager), and you will see your folders from the color you selected
  ## Colors preview
   if you press the button "Colors preview" you will see a list with the images of all the colors applied in the folder
   
   if you press the button "Restore to default" the color of folders was restore to initial papirus color
   
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
