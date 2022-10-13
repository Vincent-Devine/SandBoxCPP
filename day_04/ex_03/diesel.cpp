#include "diesel.h"

using namespace day_04;

diesel::diesel(): engine("Diesel", 500.000000f, 2, 3)
{
}

diesel::~diesel()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}