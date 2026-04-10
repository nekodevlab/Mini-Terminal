// CommandManager.hpp
#pragma once

#include <string>
#include <map>
#include <functional>
#include <vector>

class CommandManager
{
public:
    using Command = std::function<void(const std::vector<std::string> &)>;

    void registerCommand(const std::string &name, Command cmd);
    void execute(const std::string &line);

private:
    std::map<std::string, Command> commands;

    std::vector<std::string> split(const std::string &line);
};