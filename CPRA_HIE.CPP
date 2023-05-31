#include<iostream.h>
#include<conio.h>
class Base
{
  private:

  public:
	 Base(){
	   cout<<"\nBase";
	 }
};
class Derived:public Base
{
  private:
  public:
	 Derived(){
	    cout<<"\nDerived";
	 }
};
class Derived2:public Base
{
  private:
  public:
	 Derivade2(){
	   cout<<"\nDerived2";
	 }
};
void main()
{
  clrscr();
  Derived2 d1;
  Derived d2;
  getch();
}