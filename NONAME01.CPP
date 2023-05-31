#include<stdio.h>
#include<conio.h>

void main()
{  int num1,rem,sum=0;
   clrscr();
   printf("Enter any number");
   scanf("%d",&num1);

   for(;num1>0;)
   {
    rem = num1 % 10;
    sum += (rem*rem*rem);
    num1 = num1 /10;

   }
   printf("sum : %d",sum);

   getch();
