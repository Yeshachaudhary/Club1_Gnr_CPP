#include<iostream.h>
#include<conio.h>
void main()
{
  int choice,no1,no2;
  clrscr();
  cout<<"\nEnter no1 and no2";
  cin>>no1>>no2;
  while(1)
  {
  cout<<"\n1-----Addition";
  cout<<"\n2-----Subtraction";
  cout<<"\n3-----Multiplication";
  cout<<"\n4-----Devision";
  cout<<"\n5-----Exit";
  cout<<"\nEnter your choice";
  cin>>choice;
  switch(choice)
  {
    case 1: cout<<"\nAddition of two number is"<<no1+no2;
	    break;
    case 2: cout<<"\nSubtraction of two number is"<<no1-no2;
	    break;
    case 3: cout<<"\nMultiplication of two number is"<<no1*no2;
	    break;
    case 4: cout<<"\nDevision of two number is"<<no1/no2;
	    break;
    case 5: exit(0);


  }
  getch();
  }
}