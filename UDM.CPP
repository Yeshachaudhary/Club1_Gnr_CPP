#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream & currency(ostream & output)
{
  output<<"Rs";
  return output;
}
ostream & form(ostream & output)
{
  output.setf(ios::showpos);
  output.setf(ios::showpoint);
  output.fill('*');
  output.precision(2);
  output<<setiosflags(ios::fixed)<<setw(10);
  return output;
}
int main()
{
  clrscr();
  cout<<currency<<form<<777.888;
  getch();
  return 0;

}