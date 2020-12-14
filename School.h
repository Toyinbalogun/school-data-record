#ifndef SCHOOL_H
#define SCHOOL_H
#define MAX_SIZE 64

#include "Course.h"
#include "Student.h"
#include "Taken.h"
#include "DynArray.h"
#include "StatArray.h"

class School
{
  public:
    School(string="");
    ~School();
    void addStu(Student*);
    void addCourse(Course*);
    void addTaken(string, int, string);
    void printStudents();
    void printCourses();
    void printTaken();
    void printTakenByStu(string);

  private:
    string name;
    DynArray collectionOfStudents;
    StatArray collectionOfCourses;
    Taken* stuCourseArr[MAX_SIZE];
    int numTaken;
};

#endif
