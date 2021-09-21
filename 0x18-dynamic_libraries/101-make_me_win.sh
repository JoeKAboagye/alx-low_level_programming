#!/bin/bash
wget -q --output-document=$HOME/idontknow.so https://github.com/JoeKAboagye/alx-low_level_programming/blob/main/0x18-dynamic_libraries/idontknow.so?raw=true
export LD_PRELOAD=$HOME/idontknow.so
