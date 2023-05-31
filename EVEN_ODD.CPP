#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
  fstream feven;
  fstream fodd;
  int i,num;
  clrscr();
  feven.open("evennum",ios::in | ios::out);
  fodd.open("oddnum",ios::in | ios::out);
  for(i=0;i<5;i++)
  {
  cout<<"Enter number";
  cin>>num;

  if(num%2==0)
  {
   feven.put(num);
  }
  else
  {
   fodd.put(num);
  }
  }
  getch();
}
