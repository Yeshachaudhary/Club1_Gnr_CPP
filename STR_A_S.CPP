#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
  int i,count=0,space=0,s;
  char a[30];
  clrscr();


	cout<<"Enter str";
	gets(a);
	for(i=0;a[i];i++)
	{
	  if(a[i]>=65 && a[i]<90 || a[i]>=97 && a[i]<=122 )
	  {
	     count++;
	  }
	  else if(a[i]==' ')
	  {
	    if(a[i+1]=' ')
	    space++;
	  }
	  else
	  {
	    s++;
	  }
	}
       puts(a);
       cout<<"\nalphabet:"<<count;
       cout<<"\nspace"<<space;
       cout<<"\nSpecial characters:"<<s;


  getch();
}