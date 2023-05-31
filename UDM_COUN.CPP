#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream & dubai(ostream & output)
{
  output<<"Dirham";
  return output;
}
ostream & uk(ostream & output)
{
  output<<"Pound";
  return output;
}
ostream & usa(ostream & output)
{
  output<<"$";
  return output;
}
ostream & form1(ostream & output)
{
  output.setf(ios::showpos);
  output.setf(ios::showpoint);
  output.fill('*');
  output.precision(2);
  output<<setiosflags(ios::fixed)<<setw(10);
  return output;
}
ostream & form2(ostream & output)
{
  output.setf(ios::showpos);
  output.setf(ios::showpoint);
  output.fill('#');
  output.precision(2);
  cout.setf(ios::scientific,ios::floatfield);
  output<<setw(10);
  return output;
}
ostream & form3(ostream & output)
{
  output.setf(ios::showpos);
  output.setf(ios::showpoint);
  output.fill('^');
  output.precision(2);
  output<<setiosflags(ios::fixed)<<setw(10);
  output<<setw(10);
  return output;
}

int main()
{
  clrscr();
  cout<<dubai<<form1<<777.888<<"\n";
  cout<<uk<<form2<<333.666<<"\n";
  cout<<usa<<form3<<33.555<<"\n";
  getch();
  return 0;
}