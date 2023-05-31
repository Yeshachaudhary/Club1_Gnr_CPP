#include<iostream.h>
#include<conio.h>
class A{
      public:
	     void write();

};
class B : public A{
      public:
	     void write()
	     {
	      cout<<"This is write method under class B";
	     }

};
void main()
{
  B b1;
  clrscr();
  b1.write();
  getch();
}