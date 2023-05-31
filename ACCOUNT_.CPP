#include<iostream.h>
#include<conio.h>
class Account
{
  private:
	  int a,b;
  public:
	Account()
	{
	  cout<<"constructor";
	}
	Account(int a,int b)
	{
	  cout<<a+b;
	}
	Account (Account &a5)
	{
	  a = a5.a;
	  b = a5.b;
	}
};
void main()
{
  Account a1(10,90),a2,a3(a1);
  clrscr();

  getch();
}