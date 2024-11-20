#include<conio.h>
#include<iostream.h>
class A
{

void show1()
{
cout<<"class A"<<endl;
}
friend class B ;
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
B b1;
b1.show2();
getch();


}