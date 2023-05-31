#include<iostream.h>
#include<conio.h>
int n(int num);
void main()
{
 clrscr();
 cout<<n(1);
 getch();
}
int n(int num)
{
  if(num == 100)
  {
    return 100;
  }
  cout<<num<<"\t";
  return n(num+1);

}