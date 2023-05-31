#include<iostream.h>
#include<conio.h>
#include<string.h>
class Emp{
private:
	int eid,emp;
	float salary;
	char name[20],orgname[20],dsgn[20];
public:
       Emp()
       {
	 cout<<"\nEmployees information";
	  eid=1;
	  strcpy(name,"Yesha");
	  strcpy(orgname,"Yesha chaudhary");
	  strcpy(dsgn,"Employee");
	  salary=60000;
	  emp=6;

       }
       void dis()
       {
	cout<<endl<<eid<<"\t"<<name<<"\t"<<orgname<<"\t"<<dsgn<<"\t"<<salary<<"\t"<<emp;
       }
};
void main()
{
  clrscr();
  Emp e;
  e.dis();

  getch();
}