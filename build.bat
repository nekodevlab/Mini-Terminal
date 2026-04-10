mkdir build\win

g++ source\main.cpp source\core\*.cpp -Isource\include ^
    -Wall -Wextra -Wuninitialized -Wreturn-type -Wsign-compare -Wshadow -Werror ^
    -g -O0 ^
    -o build\win\app.exe

PAUSE