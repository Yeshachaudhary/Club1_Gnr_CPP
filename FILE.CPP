#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{

  ofstream fout;
  clrscr();
  fout.open("country.txt");
  fout<<"United state of America\n";
  fout<<"UK\n";
  fout<<"South Korea\n";
  fout.close();
  fout.open("capital.txt");
  fout<<"Washington\n";
  fout<<"London\n";
  fout<<"Seoul\n";
  fout.close();
  const int N=200;
  char line[N];
  ifstream fin;
  fin.open("country.txt");
  cout<<"countents of country file\n";

  while(fin)
  {
    fin.getline(line,N);
    cout<<line;
  }
  fin.close();

  fin.open("capital.txt");
  cout<<"countents of capital file\n";

  while(fin)
  {
    fin.getline(line,N);
    cout<<line;
  }
  fin.close();
  getch();
  return 0;
}