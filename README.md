# Chip-8 Emulator

## Supported Platforms
- [x] Windows
- [ ] Linux
- [ ] MacOS

## Configuration file

The emulator automatically search for a ```config.ini``` file in the current working folder.

Example of ```config.ini``` file:

```ini
SCRW=64
SCRH=32
PIXSZ=8
PIXON=2,240,26
PIXOFF=0,69,7
FREQ=500
TFREQ=60
KEY0=20
KEY1=81
KEY2=87
KEY3=69
KEY4=65
KEY5=83
KEY6=68
KEY7=90
KEY8=88
KEY9=67
KEYA=162
KEYB=18
KEYC=82
KEYD=70
KEYE=86
KEYF=66
```

With ```SCRW``` and ```SCRH``` you can set the Chip-8 screen size.

```PIXSZ``` is the size of each pixel. ```PIXON``` and ```PIXOFF``` are RGB pixel value of ON-pixels and OFF-pixels.

```FREQ``` is the frequency (in Hz) of each frame (instruction execution) while ```TFREQ``` is the timers frequency (60Hz is the standard for Chip-8).

With ```KEY0```-```KEYF``` you can bind the 0-F keys of the Chip-8 with the [scancode](https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes) of keys on your keyboard.
