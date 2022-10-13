#include "engine.h"

using namespace day_04;

engine::engine() : part("NoEngine", 0), consomation(0), power(0)
{
}

engine::engine(std::string name, float weight, int consomation, int power) : part(name, weight), consomation(consomation), power(power)
{
}

engine::~engine()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}

engine::operator std::string() const
{
    std::string s = get_name()
    + ": weight=" + std::to_string(get_weight()) 
    + ", consomation=" + std::to_string(consomation)
    + ", power=" + std::to_string(power);
    return s;  
}