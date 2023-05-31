#include<iostream.h>
#include<conio.h>
class A{
  private:
	  int a;
  public:
	 A(int x)
	 {
	   a=x;
	   cout<<"A class constructor:"<<a;
	 }

};
class B : public A{
  private:
	  int y;
  public:
	 B(int z,int v): A(v)
	 {
	  y=z;
	  cout<<"\nB class constructor:"<<y;
	 }

};
void main()
{
  clrscr();
  B b1(10,20);

  getch();
}