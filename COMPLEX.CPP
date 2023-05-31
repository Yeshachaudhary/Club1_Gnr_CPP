#include<iostream.h>
#include<conio.h>
class Complex
{
private:
	int a;
	int b;
public:
       void set_data(int x, int y)
       {
	 a=x;
	 b=y;
       }
       void display_data()
       {
	 cout<<"A:"<<a<<endl<<"B:"<<b<<endl;
       }
       Complex sum(Complex c6)
       {
	  Complex temp;
	  temp.a=a+c6.a;
	  temp.b=b+c6.b;
	  return temp;
       }
}
main()
{
  clrscr();
  Complex c1,c2,c3;
  c1.set_data(10,30);
  c2.set_data(40,20);

  c1.display_data();
  c2.display_data();

  c3=c1.sum(c2);
  c3.display_data();
  getch();
}