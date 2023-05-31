/*

	 OBJECT : shorting

*/

#include<stdio.h>
#include<conio.h>
#define SIZE 100
void main()
{  int a[SIZE],i,n,j,temp;
   clrscr();
   printf("\nEnter number of blocks in array: ");
   scanf("%d",&n);

   printf("\nEnter the value of array a: ");
    for(i=0;i<n;i++)
	scanf("%d",a[i]);

    printf("\nBefore Sorting");
    for(i=0;i<n;i++)
	scanf(" %d",a[i]);

	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	       if(a[i]>a[j])
	       {
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
	       } //end if
	   }//iner for
	}//outer for
    printf("\nAfter Sorting :");
     for(i=0;i<n;i++)
     {
       printf(" %d",a[i]);
     }
   getch();
}