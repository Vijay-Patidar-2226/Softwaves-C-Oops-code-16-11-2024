#include<conio.h>
#include<iostream.h>
class A
{
public:
int x,y;
void get(int x,int y)
{
x=x;
y=y;
}
void show()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
void main()
{
A a1;
clrscr();
a1.show();
a1.get(10,20);
a1.show();
getch();
}