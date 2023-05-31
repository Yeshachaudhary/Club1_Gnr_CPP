#include<iostream.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 cout<<"  1 to 5 with for loop\n";
 for(i=1;i<=5;i++)
    cout<<"\t"<<i;
 cout<<"\n  5 to 1 with for loop\n";
 for(i=5;i>0;i--)
    cout<<"\t"<<i;

 cout<<"\n  1 to 5 with while loop\n";
 i=1;
 while(i<=5)
 {
   cout<<"\t"<<i;
   i++;
 }
 cout<<"\n  5 to 1 with while loop\n";
 i=5;
 while(i>0)
 {
   cout<<"\t"<<i;
   i--;
 }
 cout<<"\n  1 to 5 with do...while loop\n";
 i=1;
 do{
   cout<<"\t"<<i;
   i++;
 }while(i<=5);
 cout<<"\n  5 to 1 with do...while loop\n";
 i=5;
 do{
   cout<<"\t"<<i;
   i--;
 }while(i>0);




 getch();
}