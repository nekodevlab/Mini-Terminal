#include <iostream>
#include <string>
//=========================
#include <stdio.h>
//=========================
#include "events.hpp"
#include "colors.hpp"
#include "variables.hpp"
#include "line.hpp"

int EventSystem::polling()
{
    input();
    commands();
    return 0;
}
void EventSystem::input()
{
    std::string input;
    std::cout << ">> " << std::flush;

    std::getline(std::cin, input);
    Variable.inbufferwrite(input);
}
int EventSystem::commands()
{
    std::string buffer;
    buffer = Variable.outbufferread();

    if (buffer.rfind("exit", 0) == 0 || buffer.rfind("close", 0) == 0) exit();
    else if (buffer.rfind("print ", 0) == 0)
    {
        std::string text = buffer.substr(6);
        print(text, 4);
    }
    else if (buffer.rfind("clear", 0) == 0 || buffer.rfind("wash", 0) == 0)
    {
        clear();
    }
    else
        print("Command not found: " + buffer, 1);
    return 0;
}