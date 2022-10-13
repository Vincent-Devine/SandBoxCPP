#include "wheel.h"

using namespace day_04;

wheel::wheel() : part("NoWheel", 0), size(0)
{
}

wheel::wheel(std::string name, float weight, float size) : part(name, weight), size(size)
{
}

wheel::~wheel()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}

wheel::operator std::string() const
{
    std::string s = get_name()
    + ": weight=" + std::to_string(get_weight()) 
    + ", size=" + std::to_string(size);
    return s;  
}