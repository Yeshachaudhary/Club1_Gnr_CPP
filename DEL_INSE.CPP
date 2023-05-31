#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],i,num,choice,p,position;
  int num1,j;
  cout<<"Enter array:";
  for(i=0;i<9;i++)
     {
       cin>>a[i];
     }
  cout<<"\n1---Inserte";
  cout<<"\n2---Delete";
  cin>>choice;

  switch(choice)
  {
    case 1:cout<<"\nInserte";
	   cout<<"\nEnter the position";
	   cin>>position;
	   cout<<"\nEnter the number";
	   cin>>num1;

	 for(j=10;j>position;j--)
	 {
	    a[j]=a[j-1];
	 }
	 a[position]=num1;

	 for(i=0;i<=9;i++)
	   {
	     cout<<a[i]<<"\t";
	   }
	   break;
    case 2:cout<<"\nDelete";
	   cout<<"\nEnter number";
	   cin>>num;

	 for(i=0;i<=9;i++)
	 {
	   if(num==a[i])
	   {
	      p=i;
	   }
	 }
	 for(i=p;i<9;i++)
	 {
	  a[i]=a[i+1];
	 }
	 i--;
	 for(i=0;i<=9;i++)
	 {
	  cout<<a[i]<<endl;
	 }
	 break;
  }
  getch();
}