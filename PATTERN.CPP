#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int num,i,count=0,r,a,b;
 clrscr();
 cout<<"Enter any number:";
 cin>>num;
 a=num;
 for(;num>0;)
 {
     num=num/10;
     count++;
 }
 //cout<<count;
 num=a;
 for(;count!=0;)
 {
    b=pow(10,count);
    cout<<num%b<<endl;
    count--;
 }
 //cout<<r;
 getch();
}