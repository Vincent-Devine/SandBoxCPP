#include <iostream>

using namespace std;

namespace day_02::ex_02
{
    class sloth
    {

        public:
            sloth();
            ~sloth();
    };
    
    sloth::sloth()
    {
        cout << "Sloth is alive!" << endl;
    }
    
    sloth::~sloth()
    {
        cout << "Sloth died! Why did you do that?!" << endl;
    }
    
}