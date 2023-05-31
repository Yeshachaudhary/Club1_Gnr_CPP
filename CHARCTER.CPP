#include<iostream.h>
#include<conio.h>
int main()
{
  int count=0;
  char c;
  clrscr();
  cout<<"input text\n";
  cin.get(c);
  while(c!='\n')
  {
    cout.put(c);
    count++;
    cin.get(c);
  }
  cout<<"\n number of characters="<<count<<"\n";
  getch();
  return 0;
}