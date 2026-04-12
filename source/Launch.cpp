// Custom Headers
#include "EventSystem.hpp"

int main()
{
    EventSystem Event;
    Event.Init();

    while (IsWorking)
    {
        Event.Polling();
    }
    return 0;
}