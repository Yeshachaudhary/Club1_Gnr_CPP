#include<iostream.h>
#include<conio.h>
int main()
{
  char name[5][30],clg[5][30];
  float fees[10];
  int i;
  clrscr();
  cout<<"Enter name\n";
    for(i=0;i<5;i++)
    {
       cin>>name[i];
    }
   cout<<"\n";
   cout<<"Enter fees\n";
    for(i=0;i<5;i++)
    {
       cin>>fees[i];
    }
   cout<<"\n";
   cout<<"Enter collage";
    for(i=0;i<5;i++)
    {
       cin>>clg[i];
    }
   cout<<"\n";
  cout.width(12);
  cout<<"Name";
  cout.width(10);
  cout<<"Fess";
  cout.width(10);
  cout<<"Collage\n";
  for(i=0;i<5;i++)
    {
       cout.width(12);
       cout.fill('#');
       cout<<name[i];
       cout.width(10);
       cout.fill('$');
       cout.precision(3);
       cout<<fees[i];
       cout.width(10);
       cout.fill('<');
       cout<<clg[i]<<"\n";
    }

  getch();
  return 0;
}