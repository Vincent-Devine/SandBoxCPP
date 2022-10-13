#include "part.h"

using namespace day_04;

part::part(std::string name, float weight, int consomation, int power) : 
name(name), 
weight(weight), 
consomation(consomation), 
power(power)
{
}

part::part(std::string name, float weight, float size) : 
name(name), 
weight(weight), 
size(size)
{
}

std::string part::get_name() const
{
    return this->name;
}

float part::get_weight() const
{
    return this->weight;
}

int part::get_consomation() const
{
    return this->consomation;
}

int part::get_power() const
{
    return this->power;
}

float part::get_size() const
{
    return this->size;
}