#include <iostream>

using namespace std;

namespace day_02::ex_03
{
    class sloth
    {
        private:
            

        public:
            static int nbSloth;
            sloth();
            ~sloth();
    };
    
    sloth::sloth()
    { 
        nbSloth++;
        cout << "Sloth " << nbSloth << " is alive!" << endl;
    }
    
    sloth::~sloth()
    {
        cout << "Sloth " << nbSloth << " died! Why did you do that?!" << endl;
        nbSloth--;
    }
}

int day_02::ex_03::sloth::nbSloth = 0;