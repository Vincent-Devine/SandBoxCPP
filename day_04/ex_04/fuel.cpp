#include "fuel.h"

using namespace day_04;

fuel::fuel(): engine("Fuel", 700.000000f, 7, 6)
{
}

fuel::~fuel()
{
    std::cout << "Destroying part " << get_name() << std::endl;
}