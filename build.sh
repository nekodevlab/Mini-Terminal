#!/bin/bash

set -e

echo "Building project..."

mkdir -p build/linux
rm -f build/linux/app

g++ \
source/launcher.cpp \
source/core/*.cpp \
source/core/launcher/*.cpp \
-Isource/include \
-Isource/include/other \
-Wall -Wextra -Wuninitialized -Wreturn-type -Wsign-compare -Wshadow -Werror \
-g -O0 \
-o build/linux/app

echo "Build finished!"

cd build/linux/
./app