#include <iostream>
#include <string>

using namespace std;

namespace day_02::ex_05
{
    class sloth
    {
        private:
            string name;

        public:
            static int nb_sloth;
            
            sloth(string name);
            sloth(const sloth& sloth);
            ~sloth();

            sloth& operator=(const sloth& sloth);
            friend std::ostream& operator<< (std::ostream& out, const sloth& sloth);

            static int get_nb_sloth();
            string get_name();
    };

    sloth::sloth(string name) : name(name)
    { 
        nb_sloth++;
        cout << "Sloth " << name  << " [" << nb_sloth << "]" << " is alive!" << endl;
    }

    sloth::sloth(const sloth& sloth) : name(sloth.name)
    { 
        nb_sloth++;
        cout << "Sloth " << name  << " [" << nb_sloth << "]" << " is alive!" << endl;
    }
    
    sloth::~sloth()
    {
        cout << "Sloth " << name  << " [" << nb_sloth << "]" << " died! Why did you do that?!" << endl;
        nb_sloth--;
    }

    sloth& sloth::operator=(const sloth& sloth)
    {
        this->name = sloth.name;
        return *this;
    }

    std::ostream& operator<< (std::ostream& out, const sloth& sloth)
    {
        out << sloth.name;
        return out;
    }

    int sloth::get_nb_sloth()
    {
        return nb_sloth;
    }

    string sloth::get_name()
    {
        return name;
    }
}

int day_02::ex_05::sloth::nb_sloth = 0;