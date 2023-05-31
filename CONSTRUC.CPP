#include<iostream.h>
#include<conio.h>
class Account
{
       public:
	       Account()
	       {
		 cout<<"Default constructor";
	       }
	       Account(int x,int y)
	       {
		 cout<<endl<<x<<endl<<y;
	       }
	       Account(int h)
	       {
		 cout<<endl<<h;
	       }

};
void main()
{
  clrscr();

   Account a1,a2(40,50),a3(33);
   Account a4=Account(20,30);


  getch();
}