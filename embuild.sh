#!/usr/bin/bash

#Temporary build script
emcc -O2 code/*.c engine/ecs/*.c engine/math/*.c engine/systems/*.c -lm -s USE_SDL=2 -Iengine/include -Icode/include -o builds/game.html
