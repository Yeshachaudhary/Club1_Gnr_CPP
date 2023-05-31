#include<iostream.h>
#include<conio.h>
int fibo(int num);
void main()
{
 int ans,num,i;
 clrscr();
 cout<<"Enter any number:";
 cin>>num;
 for(i=1;i<=num;i++)
 {
   ans=fibo(i);
   cout<<" "<<ans;
 }

 getch();
}
int fibo(int num)
{
  if(num==1 || num==2)
    return 1;
    return (fibo(num-2)+fibo(num-1));
}
