#pragma once
#include <string>

class Variables {
private:
    std::string tbuffer; // type buffer
public:
    bool isWorking;

    void inbufferwrite(std::string str);
    std::string outbufferread() const;
};
inline Variables Variable;