//constructor overloading


#include<conio.h>
#include<iostream.h>
class A
{
public:
A(int x,int y)
{
cout<<"sum="<<x+y<<endl;

}



A(int x,int y,int z)
{
cout<<"sum="<<x+y+z<<endl;

}

A(int x,int y,int z,int z1)
{
cout<<"sum="<<x+y+z+z1<<endl;

}

};

void main()
{
clrscr();
A a1(2,5,8);
A a2(12,15);
A a3(10,20,30,40);
A a4(11,22);
getch();


}