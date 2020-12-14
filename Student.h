#ifndef STUDENT_H
#define STUDENT_H


class Student
{
  public:
    Student(string="000000000", string="Hey you!", string="basket-weaving", float=0.0f);
    ~Student();
    string getName() const;
    //void setName(string n);
    string getNum();
    //void setNum(string num);
    bool lessThan(Student*);
    void print() const;

  private:
    string number;
    string name;
    string majorPgm;
    float  gpa;

};

#endif
