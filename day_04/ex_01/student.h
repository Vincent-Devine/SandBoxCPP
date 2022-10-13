#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

namespace day_04::ex_01
{
    class student
    {
    private:
        int student_nb = 0;

    public:
        static int nb_student;
        student();
        ~student();

        student& operator=(const student& student);
    };
}

#endif //STUDENT_H