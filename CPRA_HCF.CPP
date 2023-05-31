#include<iostream.h>
#include<conio.h>

void main()
{
  int n1,n2,i,max=0,hcf;
  clrscr();
  cout<<"Enter first number:";
  cin>>n1;
  cout<<"\nEnter Second number:";
  cin>>n2;
  if(n1>=n2)
  {
    max=n1;
  }
  else
  {
    max=n2;
  }

  for(i=1;i<=max;i++)
  {
    if(n1%i==0 && n2%i==0)
    {
      hcf=i;
    }
  }
  cout<<hcf;


  getch();
}