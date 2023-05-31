#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
 for(i=1;i<=5;i++)
 {
   for(k=5-i;k>=1;k--)
   {
    cout<<" ";
   }
   for(j=1;j<=i;j++)
   {
    cout<<"* ";
   }
   cout<<endl;
 }

 getch();
}