#include<conio.h>
#include<iostream.h>
class A
{
void show()
{
cout<<"class A"<<endl;
}
friend void show2();
};
void show2(){
A a2;
a2.show();
cout<<"ram"<<endl;
}
void main()
{
clrscr();
show2();
getch();


}