#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student{
      private:
	      int r_no,std;
	      char name[50];
      public:
	     Student()
	     {
	       cout<<"\nDefault Constructor"<<this;
	       r_no=1;
	       strcpy(name,"Yesha");
	       std=12;
	     }
	     Student(int r_no,char name[],int std)
	     {
	       cout<<"\nPara constructor"<<this;
	       this->r_no=r_no;
	       strcpy(this->name,name);
	       this->std=std;
	     }
	     Student(Student &s)
	     {
	       cout<<"\nCopy Constructor"<<this;
	       r_no=s.r_no;
	       strcpy(name,s.name);
	       std=s.std;
	     }
	     void disp()
	     {
	       cout<<"\n"<<r_no<<"\t"<<name<<"\t"<<std<<"---"<<this;
	     }
	     //Destructor---LIFO
	     ~Student()
	     {
	       cout<<"\nDestructor Called: "<<this;
	     }

};
void main()
{
   clrscr();
   Student s1,s2(2,"Diya",11);
   Student s3(s2);

   s1.disp();
   s2.disp();
   s3.disp();
   getch();

}