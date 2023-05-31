#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5];
  int *y;
  clrscr();
  y=a;
  printf("Enter the value of array");
  for(i=0;i<5;i++)
  {
   scanf("%d",y+i);
  }
  for(i=0;i<5;i++)
  {
   printff("%d----%u",*(y+i),y+i);
  }


  getch();
}