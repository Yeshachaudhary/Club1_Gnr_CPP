#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int i;
 char ch[30],ch2[10];
 clrscr();

 cout<<"Enter string:";
 gets(ch);

 for(i=0;ch[i];i++)
 {
   if(ch[i]==' ')
     {
       cout<<"\n";
     }
   else
     {
       putchar(ch[i]);
     }
 }


 getch();
}