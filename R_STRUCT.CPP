#include<iostream.h>
#include<conio.h>
struct std{
  int id;
  char name[10];
  float fees;
}s[3];
void main()
{
  int i;
  clrscr();
  for(i=0;i<3;i++)
  {
     cout<<"Enter Std id:";
     cin>>s[i].id;
     cout<<"Enter Std name:";
     cin>>s[i].name;
     cout<<"Enter Std fees:";
     cin>>s[i].fees;
  }
  for(i=0;i<3;i++)
  {
     cout<<"\nStd id:"<<s[i].id;
     cout<<"\nStd name:"<<s[i].name;
     cout<<"\nStd fees:"<<s[i].fees;
  }

  getch();
}