// App.cpp
#include "App.hpp"
#include "Color.hpp"
#include <iostream>

void App::init()
{
    cmd.registerCommand("exit", [&](const auto &)
                        { running = false; });

    cmd.registerCommand("print", [&](const std::vector<std::string> &args)
                        {
        if (args.empty())
        {
            std::cout << Color::Bold::Yellow << "\"print\" must contain at least something inside" << Color::Reset << "\n";
            return;
        }
        for (auto& a : args)
            std::cout << Color::Bold::Green << a << Color::Reset << " ";
        std::cout << "\n"; });

    cmd.registerCommand("clear", [&](const auto &)
                        {
                            #ifdef _WIN32
                            system("cls");
                            #else
                            std::cout << "\033[2J\033[H" << std::flush;
                            #endif
                        });
    cmd.registerCommand("help", [&](const auto &)
    {
        std::cout << Color::Bold::White << "Commands: " << Color::Reset << "\n";
        std::cout << Color::Bold::Blue << "clear <- clear terminal\nprint <argument> <- outputs text to the console\nexit <- close terminal" << Color::Reset << "\n";
    });
}

void App::run()
{
    init();

    std::string line;

    while (running)
    {
        std::cout << ">> ";
        std::getline(std::cin, line);

        cmd.execute(line);
    }
}