#!/bin/bash
wget -P /tmp/ https://github.com/MarB-T/alx-low_level_programming/blob/main/0x18-dynamic_libraries/_gm.so
export LD_PRELOAD=/tmp/_gm.so
