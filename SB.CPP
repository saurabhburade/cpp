#include<iostream.h>
#include<conio.h>
class Sb
{
int a,b;
public:
Sb() //default constructor
{
a=0;
b=0;
cout<<this<<" object is created  ";
cout<<"a= "<<a<<"b= "<<b<<endl;


}
Sb(int x,int y):a(x),b(y) //parameterise constructor
{
cout<<this<<" object is created ";
cout<<"a= "<<a<<"b= "<<b<<endl;
}
Sb(Sb &obj) //copy constructor
{
a=obj.a;
b=obj.b;
cout<<this<<" object is created  ";
cout<<"a= "<<a<<"b= "<<b<<endl;

}
~Sb() //destructor
{
cout<<this;
cout<<" destructor is executed "<<endl;

}
};
main()
{
clrscr();
{
Sb ob1;
Sb ob2(1,2);
Sb ob3(ob2);
}            //destructor execute after execution of block of constructors
getch();
return(0);
}