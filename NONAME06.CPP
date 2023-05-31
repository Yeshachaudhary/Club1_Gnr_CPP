#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();

  printf("Gujarati Dish");
  printf("Marathi Dish");
  printf("Italian ");

  printf("Enter your choice");
  scanf("%d",choice);

   switch(choice)
   {
      case 1:printf("\nGujarati Dish");
	     printf("\n1--sabji");
	     printf("\n2--kadhi");
	     printf("\nEnter your choice");
	     scanf("%d",choice1);
	     switch(choice1)
	     {
	       case 1: printf("\nsabji");

		       printf("\n1--Bhajipaw");
		       printf("\n2---bharatu");
		       printf("\nEnter your choice");
		       scanf("%d",choice3);
		       switch(choice3)
		       {
			     case 1:printf("\n Enter your choice in sabji");
				    scanf("%d",&sabji);
				    printf("\n Enter number of plate: ");
				    scanf("%d",&sabji_plate);

				    total = sabji_plate * price ;
				    printf("total price %d",total);

				    break;

		       }

	     }

   }//switch
  getch();
}