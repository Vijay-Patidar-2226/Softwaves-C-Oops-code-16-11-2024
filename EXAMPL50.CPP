
//Data encapsulation

#include<conio.h>
#include<iostream.h>

class A
{
private:
int x,y;
public:
void get(int a,int b){
x=a;
y=b;
}
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
a1.get(10,20);
a1.show();
getch();

}
