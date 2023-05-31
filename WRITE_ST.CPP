#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  char * string1 ="c++";
  char * string2 ="programming";
  clrscr();
  int m =strlen(string1);
  int n =strlen(string2);

  for(int i=1;i<n;i++)
  {
    cout.write(string2,i);
    cout<<"\n";
  }

  for(i=n;i>0;i--)
  {
    cout.write(string2,i);
    cout<<"\n";
  }
  //concatenating strings
  cout.write(string1,m).write(string2,n);
  cout<<"\n";
  cout.write(string1,10);
  getch();
}
