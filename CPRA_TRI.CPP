#include<iostream.h>
#include<conio.h>
void main()
{
  int num,a,b,i,j,c=0;
  clrscr();
  cout<<"Enter any number";
  cin>>num;
  for(i=2;i<=num;i++)
  {
    a=0;
    b=1;
    cout<<b;
    for(j=2;j<i;j++)
    {
    c=a+b;
    cout<<c;
    a=b;
    b=c;
    }
    cout<<endl;
  }
  getch();
}