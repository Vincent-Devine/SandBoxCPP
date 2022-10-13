#include <iostream>
#include "cat.h"

using namespace day_02::ex_06;

cat::cat(std::string name)
{
    this->name = name;
    std::cout << "Cat " << this->name << " is alive!" << std::endl;
}
cat::cat(const cat& catPrev)
{
    this->name = catPrev.name;
    std::cout << "Cat " << this->name << " is alive!" << std::endl;
}
cat::cat(sloth& aSlot)
{
    this->name = aSlot.get_name();
    std::cout << "Cat " << this->name << " is alive!" << std::endl;
}
cat::~cat()
{
    std::cout << "Cat " << name << " died! Why did you do that?!" << std::endl;
}
cat& cat::operator=(cat& other)
{
    this->name = other.name;
    return *this;
}
cat& cat::operator=(sloth& other)
{
    this->name = other.get_name();
    return *this;
}
std::string cat::get_name() const
{
    return this->name;
}

std::ostream& day_02::ex_06::operator<<(std::ostream& os, const cat& aCat)
{
    os << aCat.get_name();
    return os;
}