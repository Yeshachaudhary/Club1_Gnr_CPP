#include<iostream.h>
#include<conio.h>
void main()
{
  int r,c,a[10][10],i,j;
  clrscr();
  cout<<"Enter any number";
  cin>>r;
  cin>>c;
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
	 cin>>a[i][j];
       }
    }

   for(i=0;i<r;i++)
    {
       if(i%2==0)
       {
       for(j=0;j<c;j++)
       {
	 cout<<a[i][j]<<endl;
       }
       }
       else
       {
	 for(j=c-1;j>=0;j--)
	   {
	    cout<<a[i][j]<<endl;
	   }
       }

    }


  getch();
}
/*
   i=0,2,3
   j=
   1 2 3
   4 5 6
   7 8 9


*/