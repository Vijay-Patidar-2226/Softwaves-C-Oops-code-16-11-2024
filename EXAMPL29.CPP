#include<conio.h>
#include<iostream.h>
class A
{
public:
void show(int x,int y)
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}

};
void main()
{
clrscr();
A a1;
a1.show(10,20);
getch();

}