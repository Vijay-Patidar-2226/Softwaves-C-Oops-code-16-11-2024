#include<conio.h>
#include<iostream.h>

class A
{

int x,y;
public:
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
a1.x=10;
a1.y=20;
a1.show();
getch();

}
