#include<iostream.h>
#include<conio.h>
//Initializer
class Royal
{
  public:
	 int a,b,c;
	 const int f;
	 int &k;  // reference variable
	 Royal(int x,int y,int &n):f(90),k(n)
	 {
	   a=x;
	   b=y;

	   //f = 90; Gives Error
	 }
	 void display()
	 {
	   //const int h=90;
	   //h__ Gives Error
	   cout<<"a:"<<a<<"\nb:"<<b<<"\nf:"<<f<<"\nk:"<<k;
	 }
};

void main()
{
   clrscr();
   int m=80;
   Royal r1(10,20,m);
   r1.display();
   getch();
}