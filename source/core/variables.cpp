#include <string>
#include <cstring>
//=========================
#include "variables.hpp"

void Variables::inbufferwrite(std::string str)
{
    if (str.empty()) return;
    tbuffer = str;
}
std::string Variables::outbufferread() const
{
    return tbuffer;
}