# WorldCup
## Description du projet

## Installations

### Installation de la librairie SDL2


### Installation de CMake
https://cmake.org/install/

Download: https://cmake.org/download/

Add Cmake dans le PATH:

Windows

Lors de l'intallation utiliser l'option pour modifier le system PATH environment variable ou sinon le faire manuellement en mettant(e.g. C:\Program Files\CMake\bin) dans le PATH

Mac OS
1. Copier CMake.app dans Applications
2. Lancer CMake.app
3. Aller sur l'onglet "Tools/How to Install For Command Line Use” et suivre les instructions pour rendre disponbles les outils des lignes de commandes dans le PATH

```sh
PATH="/Applications/CMake.app/Contents/bin":"$PATH"
```

 
There are pre-compiled binaries available on the Download page for macOS as disk images and tarballs. After copying CMake.app into /Applications (or a custom location), run it and follow the “How to Install For Command Line Use” menu item for instructions to make the command-line tools (e.g. cmake) available in the PATH. Or, one may manually add the install directory (e.g. /Applications/CMake.app/Contents/bin) to the PATH.
One may alternatively download and build CMake from source as in the following section.

Linux

