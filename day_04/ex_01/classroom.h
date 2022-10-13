#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>

#include "student.h"

using namespace std;

namespace day_04::ex_01
{
    class classroom
    {
    private:
        int classroom_nb = 0;

        int nb_student_in_classroom = 0;
        student* students;

    public:
        static int nb_classroom;
        classroom(int nb_student_in_classroom);
        classroom(const classroom& classroomCopy);
        ~classroom();

        classroom& operator=(const classroom& classroom);
    };
}

#endif //CLASSROOM_H