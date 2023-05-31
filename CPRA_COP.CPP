#include<iostream.h>
#include<conio.h>
class Demo
{
public:
       int x,y;
       int *p;
       Demo()
       {
	  p = new int;
       }
       Demo(Demo &d)
       {
	  x=d.x;
	  y=d.y;
	  p = new int;
	  *(p) = *(d.p);
       }
       void set_data()
       {
	 x=10;
	 y=20;
	 p=&x;
       }
       void display()
       {
	 cout<<x<<endl<<y<<endl<<*p;
       }
};
void main()
{
  clrscr();
  Demo d2;
  d2.set_data();
  Demo d1 = d2;//shallow copy d1.Demo(d2);

  //Demo d1;   //Deep copy
  //d1 = d2;
  d1.display();


  getch();
}