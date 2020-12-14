#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "Taken.h"

Taken::Taken(Student* s, Course* c, string g)
  : stu(s), course(c), grade(g)
{
  cout<<"-- Student ctor:  "<< s <<endl;
}

Student* Taken::getStudent(){ return stu; }

Course* Taken::getCourse(){ return course; }

void Taken::print()
{
  cout << "Taken: " << " " << getStudent()->getName() << " " << getCourse()->getCourseCode()
       << " "  << grade << endl;
}
