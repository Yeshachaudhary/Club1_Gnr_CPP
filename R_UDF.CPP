#include<iostream.h>
#include<conio.h>
void add();
void mul(int num1,int num2);
int sub();
float div(float n1,float n2);
void main()
{
  int num1,num2,a=0;
  float n1,n2,b;
  clrscr();
   add();

   cout<<"\nEnter num1 and num2";
   cin>>num1>>num2;
   mul(num1,num2);

   a=sub();

   cout<<"\nEnter n1:";
   cin>>n1;
   cout<<"\nEnter n2:";
   cin>>n2;
   b=div(n1,n2);
  getch();
}
void add()
{
  int a=10,b=20;
  cout<<"\nAddition:"<<a+b;
}
void mul(int num1,int num2)
{
  cout<<"\nMultiplication:"<<num1*num2;
}
int sub()
{
  int x=10,y=5;
  cout<<"\nSubtraction:"<<x-y;
}
float div(float n1,float n2)
{
  cout<<"Division:"<<n1/n2;
}