#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
  int n;
  clrscr();
  cout<<"Precision set to 3 digits\n";
  cout.precision(3);
  cout.width(10);
  cout<<"Value";
  cout.width(15);
  cout<<"sqrt_of_value"<<"\n";

  for(n=1;n<=5;n++)
   {
     cout.width(8);
     cout<<n;
     cout<<sqrt(n) <<"\n";
   }
   cout<<"\n Precision set to 5 digit\n";
   cout.precision(5);
   cout<<"  sqrt(10)="<<sqrt(10)<<"\n";
   cout.precision(0);
   cout<<"  sqrt(10)="<<sqrt(10)<<"\n";
  getch();
  return 0;
}
