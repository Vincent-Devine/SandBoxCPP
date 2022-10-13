#include "engine.h"

using namespace day_04;

engine::engine(std::string name, float weight, int consomation, int power) : part(name, weight, consomation, power)
{
}

engine::operator std::string() const
{
    std::string s = get_name()
    + ": weight=" + std::to_string(get_weight()) 
    + ", consomation=" + std::to_string(get_consomation())
    + ", power=" + std::to_string(get_power());
    return s;  
}