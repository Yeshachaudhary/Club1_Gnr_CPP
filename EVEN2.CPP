#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
  int num[10],i;
  clrscr();
  cout<<"Enter a 10 number:-\n";
  for(i=0;i<10;i++)
  {
    cin>>num[i];
  }

  ofstream fout1;
  ofstream fout2;
  fout1.open("club1.txt");
  fout2.open("club2.txt");
  for(i=0;i<10;i++)
  {
    if(num[i]%2==0)
    {
     fout1<<num[i]<<" ";
    }
    else
    {
     fout2<<num[i]<<" ";
    }
  }
  fout1.close();
  fout2.close();
  ifstream fin1,fin2;
  char ch;
  fin1.open("club1.txt");
  cout<<"Even Number: ";
  do{
     fin1.get(ch);
     cout<<ch;
  }while(fin1);
  fin1.close();
  cout<<"\n";
  fin2.open("club2.txt");
  cout<<"Odd Number: ";
  do
  {
     fin2.get(ch);
     cout<<ch;
  }while(fin2);
  fin2.close();

  getch();
  return 0;

}