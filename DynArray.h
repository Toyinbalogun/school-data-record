#ifndef DYNARRAY_H
#define DYNARRAY_H

#define MAX_ARR 64

#include "Student.h"

class DynArray
{
  public:
    DynArray();
    ~DynArray();
    void add(Student*);
    bool find(string, Student**);
    void print();


  private:
    Student** arr;
    int   size;
};

#endif
