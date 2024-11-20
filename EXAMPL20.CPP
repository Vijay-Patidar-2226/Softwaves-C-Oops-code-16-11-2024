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
void show(){
cout<<"ram"<<endl;
}
void main()
{
clrscr();
A a1;
show();
a1.show();
show();
getch();


}
