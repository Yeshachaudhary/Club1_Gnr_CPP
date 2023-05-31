#include<iostream.h>
#include<conio.h>
void main()
{
  int a[]={10,45,38,69,23,3};
  int i,temp,j,round,count=0,count1=0;
  clrscr();
  for(round=1;round<=5;round++)
  {
    count++;
   for(i=0;i<=6-round-1;i++)
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
    cout<<a[i]<<endl;
  }

  getch();
}