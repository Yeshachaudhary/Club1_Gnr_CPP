#include<iostream.h>
#include<conio.h>
void main()
{
  int num,step,a,i,sum=0;
  clrscr();
  cout<<"Enter number:";
  cin>>num;
  cout<<"\nEnter step";
  cin>>step;
	    //5 4 5+55+555+5555
  sum=num;
  a=num;
  for(i=1;i<=step-1;i++)
  {
     num=(num*10+a);
     sum+=num;
  }
  cout<<sum;


  getch();
}