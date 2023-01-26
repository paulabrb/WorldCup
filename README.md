# WorldCup
## Description du jeu

Toutes les textures sont en 32x32 et on été desginées à l'aide de GIMP

## Important

DES WARNING CONCERNANT LA SDL PEUVENT APPARAITRE SOUS Mac OS
(mais pas de warning sur Linux)

Dans le fichier  `/apps/main.cpp`
NE JAMAIS PASSER L'ARGUMENT <h1>FULLSCREEN</h1> À <h1>True</h1>  SUR Mac COS
(si vous le faites, il faut faire `CMD+Q` pour quitter)

## Installations

### Installation de la librairie SDL2

L'interface graphique du jeu a été réalisé avec la librairie SDL2

Pour l'installer sur:

Mac OS sans Xcode

```sh
brew install sdl2
```
Linux

```sh
sudo apt-get install libsdl2-dev
```

### Installation de CMake
Se référer dans: https://cmake.org/install/

Download: https://cmake.org/download/

Add Cmake dans le PATH:

Windows

Lors de l'intallation utiliser l'option pour modifier les variables d'environment du system PATH ou sinon le faire manuellement en mettant le répertoire (e.g. C:\Program Files\CMake\bin) dans le PATH

Mac OS
1. Copier CMake.app dans Applications
2. Lancer CMake.app
3. Dans l'onglet "Tools/How to Install For Command Line Use” suivre les instructions pour rendre disponbles les outils de ligne de commande dans le PATH

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

Attention: LE DOSSIER `build` DOIT ÊTRE VIDE AVANT TOUTE MANIPULATION

Dans le répertoire `\ProjetCPP\build`lancer:
```sh
cmake ..
make
```
Exécution:
```sh
./Game
```
Pour compiler à nouveau le jeu après modifications s'assurer d'avoir supprimé dans le répertoire `\ProjetCPP\build` l'exécutable `Game`, le `Makefile` , le fichier `CMakeCache.txt` et le dossier `CMakeFiles`


