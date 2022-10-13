#include "wheel.h"

using namespace day_04;

wheel::wheel(std::string name, float weight, float size) : part(name, weight, size)
{
}

wheel::operator std::string() const
{
    std::string s = get_name()
    + ": weight=" + std::to_string(get_weight()) 
    + ", size=" + std::to_string(get_size());
    return s;  
}