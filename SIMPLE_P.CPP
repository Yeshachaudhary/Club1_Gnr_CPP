#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();

 for(i=0;i<=9;)
     {
	if(i<=5)
	{
	i++;

	 for(j=1;j<=5;j++)
	 {
	    if(j<=i)
	     {
	       printf("*");
	     }
	    else
	     {
	       printf(" ");
	     }
       }
       printf("\n");
	 }//end of if

	else
	{
	i--;

	 for(j=1;j<=5;j++)
	 {
	    if(j<=6-i)
	     {
	       printf("*");
	     }
	    else
	     {
	       printf(" ");
	     }
       }
       printf("\n");
	 }//end of if

       }

  getch();
}