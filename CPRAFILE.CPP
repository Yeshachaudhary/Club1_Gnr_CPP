#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
     ofstream fout;
     clrscr();
     fout.open("yesha63.txt",);
     fout<<"Hello";
     fout.close();

     ifstream fin;
     fin.open("yesha63.txt");
     char ch;
     ch = fin.get();
     while(!fin.eof())
     {
       cout<<ch;
       ch = fin.get();
     }
     fin.close();
     getch();
}
