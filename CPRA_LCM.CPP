#include<iostream.h>
#include<conio.h>

void main()
{
  int n1,n2,i,max=0;
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
  for(i=max;i<=n1*n2;i++)
  {
    if(i%n1==0 && i%n2==0)
    {
      cout<<i;
      break;
    }
  }


  getch();
}