#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
int main()
{
  char str[80];
  clrscr();
  cout<<"Enter a string\n";
  cin>>str;
  int len=strlen(str);
  fstream file;
  file.open("TEXT",ios::in | ios::out);

  for(int i=0;i<len;i++)
  {
     file.put(str[i]);
  }
  file.seekg(0);
  char ch;
  while(file)
  {
     file.get(ch);
     cout<<ch;
  }
  getch();
  return 0;

}