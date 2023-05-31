#include<iostream.h>
#include<conio.h>
class Complex
{
    private:
	    int real,img;
    public:
	   void set_data(int x, int y)
       {
	 real=x;
	 img=y;
       }

	   void display_data()
       {
	 cout<<"real:"<<real<<endl<<"real:"<<img<<endl;
       }
       Complex operator +(Complex c5)
       {
	  Complex temp;
	  temp.real=real+c5.real;
	  temp.real=img+c5.img;
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

  c3=c1+c2;
  c3.display_data();
  getch();
}