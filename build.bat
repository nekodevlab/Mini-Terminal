@echo off

mkdir build\windows

g++ ^
    source\Launch.cpp ^
    source\core\*.cpp ^
    -Iinclude\ ^
    -std=c++20 ^
    -Wall -Wextra -Wpedantic ^
    -O2 ^
    -o build\windows\TerminalStable_v0.3-alpha.exe


echo Build finished!
PAUSE