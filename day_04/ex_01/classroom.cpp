#include "classroom.h"

using namespace day_04::ex_01;

int classroom::nb_classroom = 0;

classroom::classroom(int nb_student_in_classroom):classroom_nb(nb_classroom), nb_student_in_classroom(nb_student_in_classroom)
{
    students = new student[nb_student_in_classroom];
    nb_classroom++;
}

classroom::classroom(const classroom& classroomCopy):classroom_nb(nb_classroom), nb_student_in_classroom(classroomCopy.nb_student_in_classroom)
{
    students = new student[nb_student_in_classroom];
    for(int i = 0; i < classroomCopy.nb_student_in_classroom; i++)
    {
        students[i] = classroomCopy.students[i];
    }
    nb_classroom++;
}

classroom::~classroom()
{
    delete[] students;
}