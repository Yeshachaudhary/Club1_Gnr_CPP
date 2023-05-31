#include<iostream.h>
#include<conio.h>
class Complex{
	      private:
		      int a;
	      public:
		      void set_data(int x)
		      {
		       a = x;
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
   temp.a = -c1.a;
   return temp;
}

void main()
{
 clrscr();
 Complex c1,c2;
 c1.set_data(2);
 c2=-c1;
 c2.display();
 getch();
}