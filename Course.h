#ifndef COURSE_H
#define COURSE_H


class Course
{
  public:
    Course(int=0, string="", int=0, char='x', string="",string="");
    ~Course();
    bool lessThan(Course*);
    string getCourseCode();
    int getId();
    void print();

  private:
    int id;
    string subject;
    int code;
    char section;
    string term;
    string instructor;
  };

#endif
