//Initialization of instance variable
//Type 3
//consturctor


//parameter constructor
#include<conio.h>
#include<iostream.h>
class A
{
public:
int x,y ;
A(int a,int b)
{
x=a;
y=b;
}


void show()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}

};

void main()
{
A a1(10,20);
clrscr();

a1.show();
getch();


}