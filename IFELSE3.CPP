#include<stdio.h>
#include<conio.h>
void main()
{  int a,b,c;
   clrscr();
   printf("Enter first number");
   scanf("%d",&a);

   printf("\nEnter second number");
   scanf("%d",&b);

   if(a > b)
   {
   printf("%d is maximum number",a);
   printf("\n%d is minimum number",b);
   }
   else if(a < b)
   {
   printf("%d is minimum number",b);
   printf("\n%d is maximum number",a);
   }
   else
   {
   printf("%d and %d are same number",a,b);
   }



   getch();
}