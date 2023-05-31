#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  cout.setf(ios::left,ios::adjustfield);
  cout.fill('#');
  cout.width(10);
  cout.precision(3);
  cout<<123.45555;
  cout.setf(ios::right,ios::adjustfield);
  cout.fill('#');
  cout.width(10);
  cout.precision(3);
  cout<<324.3333;
  getch();
  return 0;
}