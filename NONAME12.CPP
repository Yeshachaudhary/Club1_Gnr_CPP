#include<iostream.h>
#include<conio.h>
class Complex{
	      private:
		      int a;
	      public:
		      void set_data(int x)
		      {
		       a=x;
		      }
		      void display()
		      {
		       cout<<a<<endl;
		      }
		      friend Complex operator-(Complex);

};
Complex operator-(Complex c1)
{
   Complex temp;
   temp.a=-a
}

void main()
{
 clrscr();
 Complex c1,c2;
 c1.set_data(2);
 c3.display();
 getch();
}