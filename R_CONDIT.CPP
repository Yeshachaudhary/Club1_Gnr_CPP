#include<iostream.h>
#include<conio.h>
void main()
{
  int num,num1,num2;
 clrscr();
  cout<<"Enter any number:";
  cin>>num;
  if(num>0)
  {
    cout<<"\nPositive number";
  }
  cout<<"\nEnter any number:";
  cin>>num1;
  if(num1>0)
  {
    cout<<"\nPositive number";
  }
  else
  {
    cout<<"\nNegative number";
  }
  cout<<"\nEnter any number";
  cin>>num2;
  if(num2>=0)
  {
    if(num2==0)
    {
     cout<<"\nNumber is Zero";
    }
    else
    {
     cout<<"\nPositive number";
    }
  }
  else
  {
    cout<<"\nNegative number";
  }
 getch();
}