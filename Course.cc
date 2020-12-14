#include <iostream>
using namespace std;
#include <string>

#include "Course.h"

Course::Course(int id, string s, int c, char sctn, string t, string instr)
  : id(id), subject(s), code(c), section(sctn), term(t), instructor(instr)
{
  cout<<"-- Course ctor:  "<< s <<endl;
}

Course::~Course()
{
  cout<<"-- Course dtor:  " <<endl;
}

int Course::getId(){return id;}

bool Course::lessThan(Course* c)
{
  if (this->subject < c->subject){ //sort by subject
    return true;
  }
  else if (this->subject == c->subject){
    if (this->code < c->code){ //sort by code
      return true;
    }
    else if (this->code == c->code){
      if (this->term < c->term){ //sort by section
        return true;
      }
      else if (this->term == c->term){
        if (this->section < c->section){
          return true;
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    }
    else{
      return false;
    }
  }
  else{
    return false;
  }
}

string Course::getCourseCode()
{
  string res;
  //result = name + std::to_string(age);
  res = subject + to_string(code);
  return res;
}

void Course::print()
{
  cout<<"Course: " << id << "  " << subject << "  " << code << "  " << section << "  Term: " << term
                     << "  Instr: " << instructor << endl;
}
