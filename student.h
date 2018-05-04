#include<iostream>
#include<string>
#include"course.h"
using namespace std;
class student
{
  private:
  string name;
  int i;
  course *course;
  int count;
  public:
   student()
  {
    this->name=" ";
    this-> count=0;
    for(i=0;i<=50;i++){
  this->course=new string [50];
    }
  }   
   student(student &t)
  {
    this->name=t.name;
    this->count=t.count;
    this->course=new string[50];
    for(i=0;i<=count;i++)
    {  
    this->course[i]=t.course[i];  
    }
  }
  void setcourse()
  {
   for(i=0;i<=50;i++)
    {
      this->course[i]=course[i];
    }
  }
     string getname()
  {
    this->name=name;
    return name;
  }
  void setname()
  {
    this->name=name;
  }
  course getcourse()
  {
   for(i=0;i<=50;i++)
    {
      this->course[i]=course[i];
      return course[i];
    }
  }
  course operator =(student &r)
  {
    if(this->course==r.course)
    {
      return course;
    delete[] this->course;
    memcpy(this->course,r.course,sizeof(string) *r.count);
    return course;
    }
    else
    this->course=new string[r.count];
    this->name=r.name;
    this->count=r.count;
    this->course=new string[50];
    for(i=0;i<=count;i++)
    {  
    this->course[i]=r.course[i];  
    }
  }
  friend ostream operator <<(ostream &out,student &v);
  };
   ostream operator <<(ostream &out,student &v) 
 {
    cout<<"student name is "<<v.getname()<<endl;
    for(i=0;i<=50;i++)
    {
      cout<<course[i]<<endl;
    }
    return out;
 }