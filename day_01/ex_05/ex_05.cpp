#include <iostream>
#include "ex_05.h"

using namespace std;
using namespace day_01::ex_05;

int main()
{
    void* ptrNoNull;
    void* ptrNull = nullptr; 
    is_nullptr(ptrNoNull);
    is_nullptr(ptrNull);
    return 0;
}