#include<iostream.h>
#include<conio.h>
class Calc{
private:
	int no1;

public:
	void set_data(int no1)
	{
	  this->no1=no1;
	}
	void dis_play()
	{
	   cout<<"no1: "<<no1<<endl;
	}
	//Unary (Member) Operator Overloadding Function
	void operator -()
	{
	   no1 = -no1;
	}

};
void main()
{
  clrscr();
  Calc c1;
  c1.set_data(10);
  c1.dis_play();
  -c1;
  c1.dis_play();
  getch();
}