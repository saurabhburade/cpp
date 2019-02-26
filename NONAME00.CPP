#include<iostream.h>
#include<conio.h>
class Complex
{  int real,img;
   public:
	void get()
	{
	cout<<"enter real no= ";
	cin>>real;

	cout<<"enter imaginary no= ";
	cin>>img;
	}
	void show()
	{
	cout<<"complex no is = "<<real<<"+"<<img<<"i"<<endl;
	}
     friend   Complex operator +(Complex ,Complex)
    };
      Complex operator +(Complex cm1 ,Complex cm2)
    {
    Complex Abc;
    Abc.real=cm1.real+cm2.real;
    Abc.img=cm1.img+cm2.img;
    return Abc;
    }
    void main()
    {
    Complex C1 ,C2,C3;
    C1.get();
    C2.get();
    C3=C1+C2;
    C3.show();
    getch();
    }