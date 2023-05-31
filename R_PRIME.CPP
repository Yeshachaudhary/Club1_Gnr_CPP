#include<iostream.h>
#include<conio.h>
void main()
{
  int num,num1,num2,i;
  clrscr();
  cout<<"Enter any number";
  cin>>num;
  for(i=2;i<num;i++)
  {
     if(num%i==0)
     break;
  }
  if(i==num)
  {
    cout<<num<<"is prime number"<<endl;
  }
  else
  {
    cout<<num<<"is not prime number"<<endl;
  }
  cout<<"\nEnter any number";
  cin>>num1;
  i=2;
  while(i<num1)
  {
    if(num1%i==0)
    break;
    i++;
  }
  if(i==num1)
  {
    cout<<num1<<"is prime number\n";
  }
  else
  {
    cout<<num1<<"is not prime number\n";
  }
  cout<<"\nEnter any number";
  cin>>num2;
  i=2;
  do{
    if(num2%i==0)
    break;
    i++;
  }while(i<num2);
  if(i==num2)
  {
    cout<<num2<<"is prime number\n";
  }
  else
  {
    cout<<num2<<"is not prime number\n";
  }

  getch();
}