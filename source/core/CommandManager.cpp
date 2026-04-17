/* Bye Bye! have a nice day. 17/04/2026 */

// C++ Standart Headers(STL)
#include <sstream>
#include <iostream>
// Custom Headers
#include "CommandManager.hpp"
#include "Color.hpp"

void CommandManager::registerCommand(const std::string &name, Command cmd)
{
    commands[name] = cmd;
}

std::vector<std::string> CommandManager::split(const std::string &line)
{
    std::stringstream ss(line);
    std::string word;

    std::vector<std::string> out;

    while (ss >> word)
        out.push_back(word);

    return out;
}

void CommandManager::execute(const std::string &line)
{
    auto args = split(line);

    if (args.empty())
        return;

    std::string cmd = args[0];
    args.erase(args.begin());

    auto it = commands.find(cmd);

    if (it != commands.end())
    {
        it->second(args);
    }
    else
    {
        std::cout << Color::Bold::Red << "Unknown command: " << cmd << Color::Reset << "\n";
    }
}