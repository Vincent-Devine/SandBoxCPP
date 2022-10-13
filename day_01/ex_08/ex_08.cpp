#include <iostream>
#include "ex_08.h"

using namespace std;

int	main(int, char*[])
{
    day_01::ex_08::print("printed char const *");
    day_01::ex_08::print(-123);
    day_01::ex_08::print(123u);
    day_01::ex_08::print(9.2);
    day_01::ex_08::print(3.4f);

    return EXIT_SUCCESS;
}

namespace day_01::ex_08
{
    void print(const char *s)
    {
        cout << s << endl;
    }

    void print(int number)
    {
        cout << number << endl;
    }

    void print(unsigned int number)
    {
        cout << number << endl;
    }

    void print(double number)
    {
        cout << number << endl;
    }

    void print(float number)
    {
        cout << number << endl;
    }
}