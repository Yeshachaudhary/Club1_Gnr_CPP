#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{   int a[SIZE];
    int i,j,temp;
    clrscr();
	 for(i=0;i<5;i++)
	      {
		printf("\nEnter the value of a[%d]",i);
		scanf("%d",&a[i]);
	      }//end of for
		printf("\nThe array is as follows before sorting\n");
		   for(i=0;i<5;i++)
		     {
			printf("%d\t",a[i]);
		     }

		     for(i=0;i<SIZE;i++)
			{
			  for(j=0;j<SIZE-1;j++)
			     {
				  if(a[j]>a[j+1])
				    {
				      temp=a[j];
				      a[j]=a[j+1];
				      a[j+1]=temp;
				    }//end of if
			     } //end of inner for

			} //end of outer for
	      printf("\nThe array is as follows after sorting\n");
		   for(i=0;i<5;i++)
		     {
			printf("%d\t",a[i]);
		     }

    getch();
}