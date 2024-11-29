
#include<conio.h>
#include<iostream.h>


class A
{
public:
int cube(int a){
return a*a*a;
}


};

void main()
{

A a1;
clrscr();
cout<<a1.cube(10);
getch();
}