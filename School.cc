#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "School.h"

School::School(string n)
: name(n)
{
  numTaken =0;
}

School::~School()
{
  for (int i=0; i<numTaken; ++i)
    delete stuCourseArr[i];
}


void School::addStu(Student* s)
{
  collectionOfStudents.add(s);
}

void School::addCourse(Course* c)
{
  collectionOfCourses.add(c);
}

void School::addTaken(string stuNum, int courseId, string grade)
{
  //first set s and c both to null
  Student* s = NULL;
  Course* c = NULL;
  collectionOfStudents.find(stuNum, &s); //find a stu with given stuNum and store it at s address
  collectionOfCourses.find(courseId, &c); //find a course with given Id and store it at c address
  Taken* t;

  if ((s != NULL) && (c != NULL)){
    t = new Taken(s, c, grade);
    stuCourseArr[numTaken] = t;
    numTaken++;
  }
  //else either a stuNum or courseID wanst found
}

void School::printStudents()
{
  cout << endl;
  cout << name << "=== STUDENTS: " << endl;
  collectionOfStudents.print();
}

void School::printCourses()
{
  cout << endl;
  cout << name << "=== COURSES: " << endl;
  collectionOfCourses.print();
}
void School::printTaken()
{
  cout << endl;
  string x = "NONE";
  if (numTaken == 0){
    cout << name << "=== TAKEN: " << x << endl;
  }
  else{
    cout << name << "=== TAKEN: " << endl;
    for(int i=0; i <numTaken; ++i){
      stuCourseArr[i]->print();
    }
  }
}
void School::printTakenByStu(string stuId)
{
  //first set sId to NULL
  Student* sId = NULL;
  collectionOfStudents.find(stuId, &sId); // call find to find that stu
  for(int i=0; i < numTaken; ++i){
    if (stuCourseArr[i]->getStudent() == sId){
      cout << endl;
      cout << name << "TAKEN BY" << stuCourseArr[i]->getStudent()->getName() << endl;
      stuCourseArr[i]->getCourse()->print();
      stuCourseArr[i]->print();
    }
  //  else show no courses
  }
}
