# GTick (using CMake)

This repo is a fork of gtick-0.5.5 from here https://www.antcom.de/gtick/, a very useful metronome application on Linux.

The last Fedora distro (37) does not provide this program anymore, and I do not like KMetronom (mainly because of dependency on FluidSynth), so I tried to build it from source. The build process was not working for me well and I decided to drop Autotools for CMake.

## How to build

Well, it's standard CMake way:

```shell
$ cd gtick
$ mkdir build
$ cd build
$ cmake ..
$ make
```
## Things not covered yet and maybe will not be...

* NLS just skipped. Internationalization will not be used
* Proper installation/packaging 
