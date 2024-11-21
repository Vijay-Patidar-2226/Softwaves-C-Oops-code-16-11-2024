#include<conio.h>
#include<iostream.h>
class A
{
private:
void show()
{
cout<<"class A"<<endl;
}
friend void main();
};
void main()
{
clrscr();
A a1;
a1.show();
getch();

}