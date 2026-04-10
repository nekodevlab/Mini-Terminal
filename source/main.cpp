#include "include/variables.hpp"
#include "include/events.hpp"
//=========================
#include <iostream>
//=========================
#include <stdio.h>

int main()
{
    Variable.isWorking = true;

    while (Variable.isWorking)
    {
        if (event.polling()) 
            break;
    }
    return 0;
}