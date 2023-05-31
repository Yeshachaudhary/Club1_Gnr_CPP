#include<iostream.h>
#include<conio.h>
class Demo{
     public:
	    int x,y;

     void set_data(int a,int b)
     {
	 x=a;
	 y=b;
     }
     void display()
     {
	cout<<endl<<x<<endl<<y;
     }
     operator int()
     {
	return x;
     }
};
void main()
{
//   class Type to primitive type
     clrscr();
     int f;
     Demo d1;
     d1.set_data(20,70);
     d1.display();

     f = d1;

     cout<<endl<<f;

     getch();
}