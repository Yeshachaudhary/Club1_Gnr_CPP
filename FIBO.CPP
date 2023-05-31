#include<iostream.h>
#include<conio.h>
int fibo(int num);
void main()
{
  int i,num;
  clrscr();
 for(i=0;i<num;i++)
     {
       cout<<fibo(i);
     }
  getch();
}
int fibo(int num)
{

  if(num==0 ||num==1)
   {
     return num;
   }
   return(fibo(num-2)+fibo(num-1));   //0 1 1 2 3 5

}
