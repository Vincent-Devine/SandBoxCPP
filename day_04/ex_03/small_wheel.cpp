#include "small_wheel.h"

using namespace day_04;

small_wheel::small_wheel(): wheel("SmallWheel", 20.000000f, 5.000000f)
{
}

small_wheel::~small_wheel()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}