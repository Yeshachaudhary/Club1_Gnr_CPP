#include<iostream.h>
#include<conio.h>
void main()
{
  int num,rev=0,rem,i,a;
  int num1,rev1=0,rem1,y;
  int num2,rev2=0,rem2,x;
  clrscr();
  cout<<"Enter any number:";
  cin>>num;
  a=num;
  for(i=0;num>0;i++)
  {
   rem=num%10;
   rev=(rev*10)+rem;
   num=num/10;
  }
  if(a==rev)
  {
  cout<<"\npalindrom number";
  }
  else
  {
  cout<<"\nnot palindrom number";
  }
  cout<<"\nEnter any number:";
  cin>>num1;
  y=num1;
  i=0;
  while(num1>0)
  {
    rem1=num1%10;
    rev1=(rev1*10)+rem1;
    num1=num1/10;
    i++;
  }
  if(y==rev1)
  {
   cout<<"\nPalindrom number";
  }
  else
  {
   cout<<"\nNot palindrom number";
  }
  cout<<"\nEnter any number:";
  cin>>num2;
  x=num2;
  i=0;
  do{
    rem2=num2%10;
    rev2=(rev2*10)+rem2;
    num2=num2/10;
    i++;
  }while(num2>0);

  if(x==rev2)
  {

   cout<<"\nPalindrom number";
  }
  else
  {
   cout<<"\nNot palindrom number";
  }

  getch();
}
