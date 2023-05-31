#include<iostream.h>
#include<conio.h>
class Demo{
      private:
	      int x,y,*p;

      public:
	     Demo(int a,int b,int c)
	     {
	       x=a;
	       y=b;
	       p=new int;
	       *p=c;
	     }
	     void display()
	     {
	       cout<<x<<endl<<y<<endl<<*p;
	     }
};
void main()
{
  clrscr();
  Demo d1(10,20,30);
  d1.display();
  getch();
}