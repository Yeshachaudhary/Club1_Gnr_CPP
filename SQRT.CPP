#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
 float sum;
 clrscr();

  cout.width(7);
  cout.fill('#');
  cout<<"srno";
  cout.width(10);
 // cout.precision(5);
  cout.fill(' ');
  cout<<"value\n";

  cout.width(7);
  cout.fill('#');
  cout<<1;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(1);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<2;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(2);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<3;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(3);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<4;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(4);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<5;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(5);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<6;
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  cout<< sqrt(6);
  cout<<"\n";

  cout.width(7);
  cout.fill('#');
  cout<<"sum :";
  cout.width(7);
  cout.precision(3);
  cout.fill(' ');
  sum=sqrt(1)+sqrt(2)+sqrt(3)+sqrt(4)+sqrt(5)+sqrt(6);
  cout<<sum;
  cout<<"\n";
 getch();
 return 0;
}