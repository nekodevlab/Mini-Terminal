/* Bye Bye! See ya, have a nice day. 17/04/2026 */

#pragma once
// C++ Standart Headers(STL)
#include <string>

class EventSystem
{
public:
    void Init();
    void Polling();
private:
    std::string InputPoll();
    void CommandPoll();

    void CommandAdd();
};

inline bool IsWorking = false;