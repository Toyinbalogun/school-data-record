#ifndef TAKEN_H
#define TAKEN_H

#include "Course.h"
#include "Student.h"

class Taken
{
  public:
    Taken(Student*, Course*, string="");
    Student* getStudent();
    Course* getCourse();
    void print();

  private:
    string grade;
    Student* stu;
    Course* course;


};

#endif
