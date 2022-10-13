#include <iostream>
#include <string>
#include "sloth.h"

using namespace day_02::ex_06;

sloth::sloth(std::string name)
{
    this->name = name;
    std::cout << "Sloth " << this->name << " is alive!" << std::endl;
}
sloth::~sloth()
{
    std::cout << "Sloth " << name << " died! Why did you do that?!" << std::endl;
}
sloth& sloth::operator=(sloth& other)
{
    this->name = other.name;
    return *this;
}
std::string sloth::get_name() const
{
    return this->name;
}

std::ostream& day_02::ex_06::operator<<(std::ostream& os, const sloth& aSloth)
{
    os << aSloth.get_name();
    return os;
}