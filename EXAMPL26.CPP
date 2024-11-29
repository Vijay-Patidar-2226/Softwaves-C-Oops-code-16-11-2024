#include<conio.h>
#include<iostream.h>
class A
{
void show1()
{
cout<<"class A"<<endl;
}
};
class B
{
public :
void show2(){
A a2;
a2.show1();
cout<<"class B"<<endl;
}
};


void main()
{
clrscr();
A a1;
a1.show1();
B b1;
b1.show2();
getch();


}