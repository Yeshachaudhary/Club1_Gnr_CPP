#include<iostream.h>
#include<conio.h>
class Calc{
private:
	int no1;
public:
	void set(int no1)
	{
	 this->no1=no1;
	}
	void dis()
	{
	 cout<<"No1:"<<no1<<endl;
	}
	friend void operator -(Calc &c);
};
void operator -(Calc &c)
{
   c.no1=-c.no1;
}
void main()
{
 clrscr();
 Calc c1;
 c1.set(12);
 c1.dis();
 -c1;
 c1.dis();

 getch();
}