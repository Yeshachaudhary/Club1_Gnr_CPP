#include<iostream.h>
#include<conio.h>
void main()
{
  int size=20;
  char city[20];
  cout<<"Enter city name: \n";
  cin>>city;
  cout<<"city name:"<city<<"\n";

  cout<<"Enter city name again:\n";
  cin.getline(city,size);
  cout<<"city name now:"<<city<<"\n";


  getch();
  return 0;
}