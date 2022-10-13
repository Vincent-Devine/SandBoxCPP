#include <cassert>

#include "ex_09.h"

int	main(int, char*[])
{
    using namespace day_01::ex_09;

    day_01::ex_09::print();
    ::print(2);
    print(11.0f);

    a::print(4);
    a::a::print(4);

    a::b::print(4);
    a::b::p('1');
    a::b::p(6.0f);
    a::a::print(6.0f);

    assert(&a::a::kenny == &a::b::kenny);

    return EXIT_SUCCESS;
}
