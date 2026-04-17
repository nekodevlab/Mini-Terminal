/* Bye Bye! See ya, have a nice day. 17/04/2026 */

#pragma once
// C++ Standart Headers(STL)
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