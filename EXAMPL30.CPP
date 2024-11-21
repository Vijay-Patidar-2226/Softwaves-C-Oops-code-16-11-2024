#include<conio.h>
#include<iostream.h>
class A
{
public:
int cube(int x)
{
return x*x*x;

}

};
void main()
{
clrscr();
A a1;
cout<<a1.cube(10);
getch();
}
