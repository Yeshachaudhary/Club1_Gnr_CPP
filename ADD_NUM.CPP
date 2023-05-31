#include<iostream.h>
#include<conio.h>
void main()
{
  int num,n=2,term,i,j=10,sum=0;
   clrscr();

    cout<<"Enter any number:";
    cin>>term;

    sum +=2;
    for(i=1;i<term;i++)
    {
      n=(n % j)*10+2;
      sum +=n;
      j*=10;
    }
    cout<<sum;


 getch();
}