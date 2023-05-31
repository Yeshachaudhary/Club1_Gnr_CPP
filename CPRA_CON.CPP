#include<iostream.h>
#include<conio.h>

void main()
{
 char ch[10],ch2[10],ch3[30],i,j;
 clrscr();
 cout<<"\nEnter first string";
 cin>>ch;
 cout<<ch;
 cout<<"\nEnter second string";
 cin>>ch2;
 cout<<ch2;
 for(i=0;ch[i];i++)
 {
   ch3[i]=ch[i];
 }
 ch3[i]=' ';
 i++;
 for(j=0;ch2[j];j++)
 {
   ch3[i]=ch2[j];
   i++;
 }
 ch3[i]='\0';
 cout<<endl<<ch3;

 getch();
}