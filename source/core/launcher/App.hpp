// App.hpp
#pragma once
#include "CommandManager.hpp"

class App
{
public:
    void run();

private:
    CommandManager cmd;
    bool running = true;

    void init();
};