#include <iostream>
#include <string>
#include <algorithm>
#include "ex_07.h"

using namespace std;

int main()
{
    day_01::ex_07::read();
    return 0;
}

namespace day_01::ex_07
{
    void read()
    {
        string string;
        cin >> string;

        bool containDigit = false;

        for(int i = 0; i < string.length(); i++)
        {
            if(isdigit(string[i]))
                containDigit = true;
        }

        if(containDigit)
            cout << "bad string" << endl;   
        else
            cout << "good job" << endl;    
    }
}