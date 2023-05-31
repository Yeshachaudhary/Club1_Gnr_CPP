#include<iostream.h>
#include<conio.h>
class emp{
private:
  int id;
  char name[10],dsgn[10],orgname[10];
  float salary;
public:
    void scan()
    {
      cout<<"\nEnter Emp id:";
      cin>>id;
      cout<<"\nEnter Emp name:";
      cin>>name;
      cout<<"\nEnter Emp designation:";
      cin>>dsgn;
      cout<<"\nEnter Emp salary";
      cin>>salary;
      cout<<"\nEnter Emp originalname";
      cin>>orgname;
    }
    void dis(){
      cout<<"\n"<<id<<"\t"<<name<<"\t"<<dsgn<<"\t\t"<<salary<<"\t"<<orgname;
    }
};
void main()
{
  emp e1,e2;
  clrscr();
  e1.scan();
  e2.scan();
  cout<<"\nID\t"<<"Name\t"<<"Designation\t"<<"salary\t"<<"originalname";
  e1.dis();
  e1.dis();
  getch();
}