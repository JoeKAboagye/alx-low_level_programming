#!/bin/bash
wget -P /tmp https://github.com/JoeKAboagye/alx-low_level_programming/blob/8f5e5ffadf6bc45872e1cb9e84ba4538f80f29db/0x18-dynamic_libraries/idontknow.so
export LD_PRELOAD=/tmp/idontknow.so
