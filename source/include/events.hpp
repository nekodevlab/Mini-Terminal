#pragma once
#include <string>
#include <stdio.h>
//-------------------
#include "colors.hpp"

class EventSystem {
public:
    int polling();
private:
    // ==========================================
    void input();
    int commands();
    //===========================================
    int exit() { std::exit(0); };
};
inline EventSystem event;