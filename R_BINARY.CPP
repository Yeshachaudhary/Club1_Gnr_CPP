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
	//Binary(Member) Over loading
     /*	Calc operator +(Calc &c2)
	{
	  Calc temp;
	  temp.no1 = no1 + c2.no1;
	}
      */
	friend Calc operator +(Calc &c1,Calc &c2);

};

   //Binary(Global + Friend) Over loading
	Calc operator +(Calc &c1,Calc &c2)
	{
	  Calc temp;
	  temp.no1 = c1.no1 + c2.no1;
	}

void main()
{
 clrscr();
 Calc c1,c2,c3;
 c1.set(12);
 c2.set(10);
 c3.set(0);

 c1.dis();
 c2.dis();
 c3.dis();

 c3 = c1 +c2;
 c3.dis();

 getch();
}