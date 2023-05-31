#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,sum=0;
 clrscr();
 for(i=1;i<=50;i++)
 {
   for(j=2;j<i;j++)
   {
     if(i%j==0)
     {
      break;
     }

   }
   if(i==j)
   {
    cout<<i<<"\t";
    sum+=i;
   }
 }
 cout<<"\n    Total of prime number between 1 to 50 : "<<sum<<"\n";
 cout<<"\n    1 to 50 prime number(while loop)\n";
 i=1;
 while(i<=50)
 {
   j=2;
   while(j<i)
   {
     if(i%j==0)
     {
       break;
     }
     j++;
   }
   if(i==j)
   {
    cout<<i<<"\t";
   }
   i++;
 }
 cout<<"\n    1 to 50 prime number(do.....while loop)\n";
 i=1;
 do{
   j=2;
   do{
     if(i%j==0)
     {
       break;
     }
     j++;
     }while(j<i);
   if(i==j)
   {
    cout<<i<<"\t";
   }
   i++;
 }while(i<=50);

 getch();
}