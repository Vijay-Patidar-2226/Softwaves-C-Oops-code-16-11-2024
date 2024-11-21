#include<conio.h>
#include<iostream.h>
class A
{
public:
void get(int a,int b)
{
x=a;
y=b;

}
void show(){
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
int x=1;
int y=2;
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
