#include<iostream.h>
#include<conio.h>
void main()
{
  int r,c,a[4][4],i,j,k,cr=0,cc=0;
  clrscr();
  cout<<"Enter any number";
  cin>>r;
  cin>>c;
  while(r>=0)
  {
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
	 cin>>a[i][j];
       }
    }
  for(i=cr;i<r;i++)
  {
    cout<<a[cr][i];
  }
  cr++;
  for(i=cr;i<r;i++)
  {
    cout<<a[i][c-1];
  }
  if(r==c)
  {
   c--;
   for(i=c-1;i>=0;i--)
   {
     cout<<a[r-1][i];
   }
  }
  else if(r>c)
  {
    for(i=r;i>=0;i--)
    {
     cout<<a[i][cc];
    }
  }
}
  getch();
}
/*
  r=3,c=3


*/