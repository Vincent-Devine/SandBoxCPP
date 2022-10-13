#include <iostream>
#include "ex_01.h"

using namespace std;

int	main(int, char*[])
{
    using namespace day_02::ex_01;

    int a = 1;
    int b = 2;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    swap(a, b);

    cout << "swap(a, b)" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}