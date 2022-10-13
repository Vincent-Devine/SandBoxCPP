#include "part.h"

using namespace day_04;

part::part(std::string name, float weight) : 
name(name), 
weight(weight)
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