//Initialization of instance vaiable
//Type 2

#include<conio.h>
#include<iostream.h>
class A
{
public:
int x,y ;
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
A a1,a2;
clrscr();
a1.get(12,22);
a2.get(2,5);
a1.show();
a2.show();
getch();


}