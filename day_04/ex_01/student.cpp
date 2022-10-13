#include "student.h"

using namespace day_04::ex_01;

int student::nb_student = 0;

student::student():student_nb(nb_student)
{
    cout << "student " << student_nb << " created" << endl;
    nb_student++;
}

student::~student()
{
    cout << "student " << student_nb << " destroyed" << endl;
}

student& student::operator=(const student& student)
{
    cout << "student " << this->student_nb << " because " << student.student_nb << endl;
    this->student_nb = student.student_nb;
    return *this;
}