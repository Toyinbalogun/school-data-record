#include <iostream>
using namespace std;

#include "StatArray.h"

StatArray::StatArray()
{
  size = 0;
}

StatArray::~StatArray()
{
  for (int i=0; i<size; ++i)
    delete arr2[i];
}

void StatArray::add(Course* c)
{
  if (size >= MAX_ARR) //just return if array if full
    return;

  int pos=0;
  for (int i=0; i<size; ++i)
  {
    if (c->lessThan(arr2[i])){ //find the pos to insert
      pos = i;
      break;
    }

    else{ //if its > the last element
      pos = size;
    }
  }

  for (int i=size;i>pos;--i){ //shift the array right from the back
      arr2[i] = arr2[i-1];
  }

  arr2[pos]=c;
  size++;
}

bool StatArray::find(int id, Course** c)
{
  for(int i=0;i<size;++i){ //loop through the courseArr to find studID in param
    if (arr2[i]->getId() == id){
      *c = arr2[i];
      return true;
    }
  }
  *c = NULL;  //if after loop it cant find the student then set the pointer to NULL
  return false;
}

void StatArray::print()
{
  //cout << endl << endl << "COURSES:" << endl;
  for (int i=0; i<size; ++i)
    arr2[i]->print();

  cout << endl;
}
