#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  cout.setf(ios::showpos);
  cout.setf(ios::left,ios::adjustfield);
  cout.setf(ios::scientific,ios::floatfield);
  cout.fill('#');
  cout.width(10);
  cout.precision(3);
  cout<<123.45555;
  getch();
  return 0;
}