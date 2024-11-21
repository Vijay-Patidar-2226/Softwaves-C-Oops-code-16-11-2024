#include<conio.h>
#include<iostream.h>
class A
{
public:
int x,y;
void get(int a,int b)
{
x=x;
y=y;

}
void show(){
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
};
void main()
{
clrscr();
A a1;
a1.show();
a1.get(10,20);
a1.show();
getch();
}
