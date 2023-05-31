#include<iostream.h>
#include<conio.h>
class Calc{
     private:
	     int no1,no2;
     public:
	     Calc(int no1,int no2)
	     {
	       this->no1=no1;
	       this->no2=no2;
	     }
	     void disp()
	     {
	       cout<<"\nNo1: "<<no1<<"\t\tno2: " <<no2;
	     }
	     friend void swap(Calc &c);
};
void swap(Calc &c)
{
  int t;
  t=c.no1;
  c.no1=c.no2;
  c.no2=t;
}

void main()
{
  clrscr();
  Calc c(10,20);
  c.disp();
  swap(c);
  cout<<"\nSwapping Called:" ;
  c.disp();
  getch();
}