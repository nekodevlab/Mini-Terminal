/* Bye Bye! have a nice day. 17/04/2026 */

// C++ Standart Headers(STL)
#include <string>
#include <iostream>
// Custom Headers
#include "EventSystem.hpp"
#include "CommandManager.hpp"
#include "CommandMetadata.hpp"
#include "Color.hpp"

CommandManager cmd;

void EventSystem::Init()
{
    CommandAdd();
    CommandPoll();

    IsWorking = true;
}
void EventSystem::Polling()
{
    std::string line = InputPoll();
    cmd.execute(line);
}

std::string EventSystem::InputPoll()
{
    std::string input;

    std::cout << ">> ";
    std::getline(std::cin, input);

    return input;
}
void ShowAllCommands()
{
    if (commandList.empty()) return;

    std::cout << "Commands: " << "\n";
    for (auto &a : commandList)
    {
        std::cout << Color::Bold::Yellow << a.CName << " - " << a.CDesc << Color::Reset << '\n';
    }
}
void EventSystem::CommandPoll()
{
    cmd.registerCommand("help", [this](const auto &){ ShowAllCommands(); });
    cmd.registerCommand("exit", [this](const auto &){ IsWorking = false; });
    cmd.registerCommand("print", [&](const std::vector<std::string> &args)
    {
        if (args.empty())
        {
            std::cout << Color::Bold::Red << "\"print\" MUST contain something inside!" << Color::Reset << '\n';
            return;
        }
        for (auto &a : args)
        {
            std::cout << Color::Bold::Green << a << Color::Reset << " ";
        }
        std::cout << '\n';
    });
}

void EventSystem::CommandAdd()
{
    commandList.push_back({"help", "show all available commands."});
    commandList.push_back({"exit", "closing terminal"});
    commandList.push_back({"print", "output text to the console."});
}