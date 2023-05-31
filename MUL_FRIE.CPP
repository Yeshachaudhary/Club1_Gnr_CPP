#include<iostream.h>
#include<conio.h>
class Complex{
	      private:
		      int a,b;
	      public:
		      void set_data(int x,int y)
		      {
		       a=x;
		       b=y;
		      }
		      void display()
		      {
		       cout<<a<<endl<<b;
		      }
		      friend Complex operator*(Complex,Complex);

};
Complex operator*(Complex c1,Complex c2)
{
   Complex temp;
   temp.a=c1.a*c2.a;
   temp.b=c1.b*c2.b;
   return temp;
}

void main()
{
 clrscr();
 Complex c1,c2,c3;
 c1.set_data(2,5);
 c2.set_data(3,4);
 c3=c1*c2;
 c3.display();
 getch();
}