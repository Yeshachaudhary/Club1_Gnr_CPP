#include<iostream.h>
#include<conio.h>
void main()
{
  int a[]={10,45,38,69,23,3,};
  int i,temp,j,round;
  clrscr();
  for(round=1;round<=5;round++)
  {
   for(i=0;i<=6-round-1;i++)
   {
     if(a[i]>a[i+1])
     {
	temp = a[i];
	a[i] =a[i+1];
	a[i+1] =temp;
     }
   }
  }

  for(i=0;i<5;i++)
  {
    cout<<a[i];
  }

  getch();
}