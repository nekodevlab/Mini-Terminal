@echo off

mkdir build\windows

g++ ^
source\launcher.cpp ^
source\core\launcher\*.cpp ^
source\core\*.cpp ^
-Isource\include ^
-Isource\include\other ^
-std=c++17 ^
-Wall -Wextra -Wpedantic ^
-O2 ^
-o build\windows\app.exe


echo Build finished!