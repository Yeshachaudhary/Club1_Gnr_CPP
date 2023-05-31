#include<stdio.h>
#include<conio.h>
void main()
{
 char name[10],surname[20],full_name[30];
 int i,k=0;
 clrscr();

   gets(name);
   gets(surname);
   for(i=0;name[i];i++)
   {
     full_name[k]=name[i];
     k++;
   }
   full_name[k]=' ';
   k++;
   for(i=0;surname[i];i++)
   {
     full_name[k]=surname[i];
     k++;
   }
   full_name[k]='\0';

   puts(full_name);


 getch();
}