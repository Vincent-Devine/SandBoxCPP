#include <iostream>
#include "ex_03.h"

using namespace std;
using namespace day_01::ex_03;

int main()
{
    cout << "result (int + int) : " << add(4, 5) << endl;
    cout << "result (float + float) : " << add(4.5f, 5.5f) << endl;
    cout << "result (double + double) : " << add(4.5f, 5.5f) << endl;
    cout << "result (unsigned int + unsigned int) : " << add((unsigned int)4, (unsigned int)5) << endl;
    cout << "result (double + unsigned int) : " << add(4.5f) << endl;
    return 0;
}