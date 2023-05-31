#include<iostream.h>
#include<conio.h>
void main()
{

  int a[]={4,38,24,12,56,3};
  int r,i,temp,count,count1;
  clrscr();
  for(r=0;r<=5;r++)
  {
   count++;
   for(i=0;i<=6-r-1;i++)
   {
     count1++;
     if(a[i]>a[i+1])
     {
	temp = a[i];
	a[i] =a[i+1];
	a[i+1] =temp;
     }
   }
  }

  cout<<count<<endl;
   cout<<count1<<endl;

  for(i=0;i<6;i++)
  {
   cout<<a[i]<<"\t";
  }
  getch();
}