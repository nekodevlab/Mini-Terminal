#pragma once
// C++ Standart Headers(STL)
#include <string>
#include <vector>

struct Command
{
    std::string CName;
    std::string CDesc;
};

std::vector<Command> commandList;