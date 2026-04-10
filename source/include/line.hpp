#pragma once

#include <string>
#include <iostream>

#include "colors.hpp"

void print(const char *str, unsigned int color)
{
    if (color > COLORS_SIZE) // massive check
        return;
    std::cout << bcolors[color] << str << RST << std::endl;
}
void print(const std::string &str, unsigned int color)
{
    if (color > COLORS_SIZE) // massive check
        return;
    std::cout << bcolors[color] << str << RST << std::endl;
}
void clear()
{
#ifdef _WIN32
    system("cls");
#else
    std::cout << "\033[2J\033[H" << std::flush;
#endif
}