# WorldCup
## Description du projet

## Installations

### Installation de la librairie SDL2


### Installation de CMake
Se référer dans: https://cmake.org/install/

Download: https://cmake.org/download/

Add Cmake dans le PATH:

Windows

Lors de l'intallation utiliser l'option pour modifier les variables  environmentle du system PATH ou sinon le faire manuellement en mettant le répertoire (e.g. C:\Program Files\CMake\bin) dans le PATH

Mac OS
1. Copier CMake.app dans Applications
2. Lancer CMake.app
3. Aller sur l'onglet "Tools/How to Install For Command Line Use” et suivre les instructions pour rendre disponbles les outils des lignes de commandes dans le PATH

```sh
PATH="/Applications/CMake.app/Contents/bin":"$PATH"
```
Ou sinon le faire manuellement en mettant le repértoire (e.g. /Applications/CMake.app/Contents/bin) dans le PATH

Configuration:

Linux

S'il n'y a aucune version de CMake préexistante:
```sh
 ./bootstrap
 make
 make install
```

Sinon:

```sh
cmake .
make      
make install
```

## Lancer le jeu

Dans `\ProjetCPP\build>`:
```sh
cmake ..
make
```
Exécution:`
```sh
./Game
```







