#include<iostream.h>
#include<conio.h>
class Complex{
	      private:
		      int a,b;
	      public:
		     friend ostream& operator<<(ostream&,Complex);
		     friend istream& operator>>(istream&,Complex&);

};
ostream& operator<<(ostream &dout,Complex c3)
{
   cout<<"a:"<<c3.a<<endl<<"b:"<<c3.b;
   return dout;
}
istream& operator>>(istream &din,Complex &c4)
{
   cout<<"Enter a:";
   cin>>c4.a;
   cout<<"Enter b:";
   cin>>c4.b;
   return din;
}
void main()
{
  clrscr();
  Complex c1;
  cin>>c1;
  cout<<c1;

  getch();
}
