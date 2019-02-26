#include<iostream.h>
#include<conio.h>
class student
{ protected:
 char name[40];
 int roll;
 public:
 void get()
 {
  cout<<"Enter name of student : ";
  cin>>name;
  cout<<"Enter Roll no  of student : ";
  cin>>roll;
  }
};
class test:public student
{ protected:
 int t1,t2;
 public:
 void getm()
 {
 cout<<"Enter test 1 marks : ";
 cin>>t1;
 cout<<"Enter test 2 marks : ";
 cin>>t2;
 }
};
class result:public test
{
float avg;
public:
void show()
  {
  cout<<"Name of student : "<<name<<endl;
  cout<<"Roll no of student : "<<roll<<endl;
  avg=(t1+t2)/2.0;
  cout<<"Avg marks of student : "<<avg<<endl;

  }

};
void main(){
clrscr();
result r;
r.get();
r.getm();
r.show();
getch();

}



