#include<iostream.h>
#include<conio.h>
void main()
{
     int num1,num2,num3;
     clrscr();
     cout<<"Enter Num1 ,num2 and num3: ";
     cin>>num1>>num2>>num3;

     if((num1==num2) && (num2==num3))
     {
	 cout<<"\nnum1,num2,num3 are same";
     }
     else if((num1==num2) && (num2!=num3))
     {
	  if(num1>num3)
	  {
	       cout<<"\nnum1 and num2 are greater then num3";
	  }
	  else
	  {
	       cout<<"\nnum3 is greater then num1 and num2";
	  }
     }
     else if((num1==num3) && (num1!=num2))
     {
	  if(num1>num2)
	  {
	       cout<<"\nnum1 and num3 are greater than num2";
	  }
	  else
	  {
	       cout<<"\nnum2 is greater than num1 and num3";
	  }
     }
     else if((num2==num3) && (num1!=num2))
     {
	  if(num2>num1)
	  {
	       cout<<"\nnum2 and num3 are greater than num1";
	  }
	  else
	  {
	       cout<<"\nnum1 is greater than num2 and num3";
	  }
     }
     else if((num1!=num2) && (num1!=num2))
     {
	  if(num2>num1)
	  {
	       cout<<"\nnum2 and num3 are greater than num1";
	  }
	  else
	  {
	       cout<<"\nnum1 is greater than num2 and num3";
	  }
     }
     else if((num1!=num2)&&(num2!=num3))
     {
	  if(num1>num2)
	  {
	       if(num1>num3)
		 {
		   cout<<"\nnum1 is max";
		 }
		 else
		 {
		   cout<<"\nnum3 is max";
		 }
	  }
	  else
	  {
	       if(num2>num3)
		 {
		   cout<<"\nnum2 is max";
		 }
		 else
		 {
		   cout<<"\nnum3 is max";
		 }

	  }
     }



 getch();
 }//end