#include "big_wheel.h"

using namespace day_04;

big_wheel::big_wheel(): wheel("BigWheel", 50.000000f, 10.000000f)
{
}

big_wheel::~big_wheel()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}