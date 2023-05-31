#include<iostream.h>
#include<conio.h>
class Account
{
private:
	int id,price;
	static float ROI;

public:
       void set_data(int x, int y)
       {
	 id=x;
	 price=y;
       }
       void display_data()
       {
	 cout<<"Id:"<<id<<endl<<"Price:"<<price<<endl;
       }
       static void st1(int data)  //static member function
       {
	 ROI =data;
       }
       static void st2()
       {
	 cout<<endl<<ROI;
       }

};
float Account :: ROI;     //Static veriable
main()
{
  clrscr();
  Account a1;
  a1.set_data(10,30);
  a1.display_data();

  Account ::st1(40);
  Account ::st2();

  getch();
}