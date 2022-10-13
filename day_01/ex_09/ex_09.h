#include <iostream>

using namespace std;

namespace
{
    void print(int number)
    {
        cout << "Global print int " << number << endl;
    }
}

namespace day_01::ex_09
{
    static int kenny = 9;

    void print()
    {
        cout << "Local print kenny " << kenny << endl;
    }
    
    void print(float number)
    {
        cout << "Global print float " << number << endl;
    }

    namespace a
    {
        void print(int number)
        {
            cout << "Global print int " << number << endl;
        }

        namespace a
        {
            void print(int number)
            {
                cout << "Local print int " << number << endl;
            }

            int& kenny = day_01::ex_09::kenny;
        }

        namespace b
        {
            void print(int number)
            {
                cout << "Global print int " << number << endl;
            }

            void p(char number)
            {
                cout << "Global print int " << +number << endl;
            }

            void p(float number)
            {
                cout << "Global print float " << number << endl;
            }

            int& kenny = day_01::ex_09::kenny;
        }
    }
}