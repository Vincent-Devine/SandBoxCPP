#include <iostream>

using namespace std;

namespace day_02::ex_04
{
    class sloth
    {
        private:
            bool isMoving;

        public:
            static int nbSloth;
            sloth();
            ~sloth();

            void start_moving();
            void start_sleeping();
    };
    
    sloth::sloth()
    { 
        nbSloth++;
        cout << "Sloth " << nbSloth << " is alive!" << endl;
        cout << "Sloth " << nbSloth << " falls asleep." << endl;
        isMoving = false;
    }
    
    sloth::~sloth()
    {
        cout << "Sloth " << nbSloth << " died! Why did you do that?!" << endl;
        nbSloth--;
    }

    void sloth::start_moving()
    {
        if(isMoving)
            cout << "Sloth " << nbSloth << " is already moving." << endl;
        else
        {
            cout << "Sloth " << nbSloth << " stops sleeping." << endl;
            isMoving = true;
            cout << "Sloth " << nbSloth << " starts moving." << endl;
        }
    }

    void sloth::start_sleeping()
    {
        if(!isMoving)
            cout << "Sloth " << nbSloth << " is already sleeping." << endl;
        else
        {
            cout << "Sloth " << nbSloth << " stops moving." << endl;
            isMoving = false;
            cout << "Sloth " << nbSloth << " falls asleep." << endl;
        }
    }
}

int day_02::ex_04::sloth::nbSloth = 0;