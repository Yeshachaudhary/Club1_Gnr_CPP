#include<iostream.h>
#include<conio.h>
void main()
{
  int i,j,k;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
     if(j<=i)
     {
      cout<<"*";
     }
    }
    cout<<endl;
  }
  cout<<endl;
  for(i=1;i<=5;i++)
  {
    for(k=5-i;k>=1;k--)
    {
     cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
     cout<<"*";
    }
    cout<<endl;

  }
  cout<<endl;
  for(i=5;i>0;i--)
  {
    for(j=i;j>0;j--)
    {
      cout<<"*";
    }
    for(k=5-i;k>=1;k--)
    {
      cout<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  for(i=5;i>0;i--)
  {
    for(k=5-i;k>=1;k--)
    {
      cout<<" ";
    }
    for(j=i;j>0;j--)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  getch();
}