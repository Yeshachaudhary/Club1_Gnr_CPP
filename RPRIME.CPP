#include<iostream.h>
#include<conio.h>
class Demo{
private:
	int num;
public:
	void set_data()
	{
	  cout<<"Enter any number";
	  cin>>num;

	}
	void dis()
	{
	  cout<<num;
	}
       friend void prime(Demo &b);
};
void prime(Demo &b)
{
  int i;
  for(i=2;i<b.num;i++)
	{
	   if(b.num % i==0)
	   break;
	}
     if(i==b.num)
       {
	 cout<<"\n%d is Prime number"<<b.num;
       }
     else
       {
	 cout<<"\n%d is not prime number"<<b.num;
       }

}
void main()
{
  clrscr();
  Number n1;
  n1.set_data();
  n1.dis();
  prime(b);
  getch();
}
