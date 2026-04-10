#pragma once

inline constexpr const char *colors[] = { // regular colors
    "\033[0m", // 0
    "\033[31m", // 1
    "\033[30m", // 2
    "\033[34m", // 3
    "\033[32m"}; // 4
inline constexpr const char *bcolors[] = { // bold colors
    "\033[1;0m", // 0
    "\033[1;31m", // 1
    "\033[1;30m", // 2
    "\033[1;34m", // 3
    "\033[1;32m"}; // 4
    
#define RST "\e[0m" // reset
inline constexpr size_t COLORS_SIZE = 5;