#include<iostream.h>
#include<conio.h>
class std{
private:
    int id,age;
    char name[10];
public:
     void scan()
     {
      cout<<"Enter std id:";
      cin>>id;
      cout<<"\nEnter std name:";
      cin>>name;
      cout<<"\nEnter std age:";
      cin>>age;
     }
     void dis()
     {
      cout<<"\n"<<id<<"\t"<<name<<"\t"<<age;
     }
};
void main()
{
  std s1,s2,s3;
  clrscr();
  s1.scan();
  s2.scan();
  s3.scan();
  s1.dis();
  s2.dis();
  s3.dis();
  getch();
}