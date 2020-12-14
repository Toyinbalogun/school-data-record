#ifndef STATARRAY_H
#define STATARRAY_H

#define MAX_ARR 64

#include "Course.h"

class StatArray
{
  public:
    StatArray();
    ~StatArray();
    void add(Course*);
    bool find(int, Course**);
    void print();

  private:
    Course* arr2[MAX_ARR];
    int   size;
};

#endif
