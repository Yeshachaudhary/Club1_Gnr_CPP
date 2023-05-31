#include<iostream.h>
#include<conio.h>
class A
{
       int a;
  public:
	 void set_data()
	 {
	   cout<<"class a\n";
	   cout<<a;
	 }
};
class B : public A
{
       int a;
  public:
	 void set_data()
	 {
	   cout<<"class b\n";
	   cout<<a;
	 }
	 void set_data(int a)
	 {
	   cout<<a;
	 }
};
void main()
{
  clrscr();
  B b1;
  b1.set_data();
  b1.set_data(10);
  getch();

}