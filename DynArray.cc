#include <iostream>
using namespace std;

#include "DynArray.h"

DynArray::DynArray()
{
  size = 0;
  arr = new Student*[MAX_ARR];
}

DynArray::~DynArray()
{
  for (int i=0; i<size; ++i){
      delete arr[i];
  }
  delete [] arr;
}

void DynArray::add(Student* s)
{
  if (size >= MAX_ARR) //just return if array if full
    return;

  int pos = 0;
  for (int i=0; i<size; ++i)
  {
    if (s->lessThan(arr[i])){ //find the pos to insert
      pos = i;
      break;
    }

    else{ //if its > the last element
      pos = size;
    }
  }

  for (int i=size;i>pos;--i){ //shift the array right from the back
      arr[i] = arr[i-1];
  }

  arr[pos]=s;
  size++;
}

bool DynArray::find(string num, Student** stu)
{
  for(int i=0;i<size;++i) //loop through the arr to find studNum in param
    if (arr[i]->getNum() == num)
      *stu = arr[i];
      return true;

  *stu = NULL;  //if after loop it cant find the student then set the pointer to NULL
  return false;
}

void DynArray::print()
{
  //cout << endl << endl << "STUDENTS:" << endl;
  for (int i=0; i<size; ++i)
    arr[i]->print();
}
