#include <string>

bool stringcmp(std::string str_a, std::string str_b)
{
    if (str_a.size() != str_b.size()) return false;
    for (size_t i = 0; i < str_a.size(); i++)
    {
        if (str_a[i] != str_b[i]) return false;
    }
    return true;
}