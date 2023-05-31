#include<iostream.h>
#include<conio.h>
class Keyboard{
private:
	int a,b;
public:
       void set_data(int m,int n )
       {
	 a=m;
	 b=n;
       }
       int getA()
       {
	   return a;
       }
       int getB()
       {
	   return b;
       }
};
class Mouse{
private:
	int x,y;
public:
       Mouse()
       {

       }
       Mouse(Keyboard &k2)
       {
	 x = k2.getA();
	 y = k2.getB();
       }
       void display()
       {
	 cout<<x<<endl<<y;
       }
};
void main()
{
   clrscr();
   Keyboard k1;
   k1.set_data(10,20);
   Mouse m1;
   m1 = k1;
   m1.display();

   getch();

}