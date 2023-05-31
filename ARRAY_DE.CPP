#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5],i,p,num;
  clrscr();
	 cout<<"Enter array";
	 for(i=0;i<=4;i++)
	 {
	   cin>>a[i];
	 }
	 cout<<"Enter number";
	 cin>>num;

	 for(i=0;i<=4;i++)
	 {
	   if(num==a[i])
	   {
	      p=i;

	   }
	 }
	 for(i=p;i<4;i++)
	 {
	  a[i]=a[i+1];
	 }
	 i--;
	 cout<<i<<endl;
	 for(i=0;i<=4;i++)
	 {
	  cout<<a[i]<<endl;
	 }

  getch();
}
