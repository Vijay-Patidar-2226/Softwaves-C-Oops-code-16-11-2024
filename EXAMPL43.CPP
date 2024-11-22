#include<conio.h>
#include<iostream.h>
class A
{
public:
int x,y;

void show()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
int  x=1;
int  y=2;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
void main()
{
A a1;
clrscr();
a1.show();
a1.show();
getch();
}