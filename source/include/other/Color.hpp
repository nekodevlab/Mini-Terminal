#pragma once

namespace Color
{
    namespace Bold
    {
        constexpr const char *Black = "\033[1;30m";
        constexpr const char *Red = "\033[1;31m";
        constexpr const char *Green = "\033[1;32m";
        constexpr const char *Yellow = "\033[1;33m";
        constexpr const char *Blue = "\033[1;34m";
        constexpr const char *White = "\033[1;37m";
    }
    namespace Regular
    {
        constexpr const char *Black = "\033[0;30m";
        constexpr const char *Red = "\033[0;31m";
        constexpr const char *Green = "\033[0;32m";
        constexpr const char *Yellow = "\033[0;33m";
        constexpr const char *Blue = "\033[0;34m";
        constexpr const char *White = "\033[0;37m";
    }
    constexpr const char *Reset = "\033[0m";
}