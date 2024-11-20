#include<conio.h>
#include<iostream.h>
class A
{
public :
void show()
{
cout<<"class A"<<endl;
}
};
void show2(){
A a2;
a2.show();
cout<<"ram"<<endl;
}
void main()
{
clrscr();
A a1;

a1.show();
show2();
getch();


}
