#include <iostream>

#include "ex_01.h"

int main()
{
    int a = 5;
    int b = 10;

    std::cout << "a : " << a << ", b : " << b << std::endl;

    swap(a, b);

    std::cout << "a : " << a << ", b : " << b << std::endl;

    float c = 5.9f;
    float d = 9.1f;
    
    std::cout << "c : " << c << ", d : " << d << std::endl;

    swap(c, d);

    std::cout << "c : " << c << ", d : " << d << std::endl;

    std::cout << "a + b : " << add(a, b) << std::endl;
    std::cout << "c + d : " << add(c, d) << std::endl;

    return 0;
}