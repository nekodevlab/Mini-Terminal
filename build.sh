mkdir build/linux
rm build/linux/app

g++ source/main.cpp source/core/*.cpp -Isource/include \
    -Wall -Wextra -Wuninitialized -Wreturn-type -Wsign-compare -Wshadow -Werror \
    -g -O0 \
    -o build/linux/app.o

cd build/linux
./app.o