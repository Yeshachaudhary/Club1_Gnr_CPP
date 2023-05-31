#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int rno;
	char name[20];
	int std;
public:
	//Default Costructor---"Special Function"
	Student()
	{
	  cout<<"\nSTART :: Default Constructor"<<this;
	  rno=1;
	  strcpy(name,"Yesha");
	  std=6;
	  cout<<"\nEXIT :: Default Constructor";
	}
	//Pra Constructor
	Student(int rno,char name[],int std)
	{
	  this->rno=rno;
	  strcpy(this->name,name);
	  this->std=std;
	}
	//Copy Constructor
	Student(Student &s)
	{
	  this->rno=s.rno;
	  strcpy(this->name,s.name);
	  this->std=s.std;
	}

	void disp()
	{
	  cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<this;//this keyword is use to local data member
	}
};
void main()
{
  clrscr();
  cout<<"\nSTRT :: Main Method";
  Student s1,s2(2,"Diya",3);
  s1.disp();
  s2.disp();
  Student s3(s2);
  s3.disp();
  cout<<"\nEXIT :: Main Method";

  getch();
}