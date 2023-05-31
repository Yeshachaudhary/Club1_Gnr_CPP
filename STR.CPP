#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
  int size=20;
  char city[20];
  clrscr();
  cout<<"Enter city name: \n";
  cin>>city;
  cout<<"city name:"<<city<<"\n";

  cin.ignore();
  cout<<"Enter city name again:\n";
  cin.getline(city,size);
  cout<<"city name now:"<<city<<"\n";

  cout<<"Enter another city name :\n";
  cin.getline(city,size);
  cout<<"city name now:"<<city<<"\n";

  getch();
//  return 0;
}