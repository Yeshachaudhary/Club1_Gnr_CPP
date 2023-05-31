#include<iostream.h>
#include<conio.h>
class Demo{
public:
       int x,y;
      Demo(){

      }
      Demo(int v)
      {
	  x=v;
	  y=0;
      }
      void set_data(int a,int b)
      {
	 x=a;
	 y=b;
      }
      void display()
      {
	cout<<endl<<x<<endl<<y;
      }


};
void main()
{
  clrscr();
  Demo d1;
  int f=60;
  d1 = f;
  cout<<endl<<d1.x;
  d1.set_data(20,30);
  d1.display();


  getch();
}