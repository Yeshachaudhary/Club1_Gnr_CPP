#include<iostream.h>
#include<conio.h>
class Parent
{
       int a,b,c;
       public:
	      Parent()
		    {
		     a=0;
		     b=0;
		     c=0;
		     cout<<"This is the parent class constructors"<<endl;
		    }
		    void add();
};
void Parent::add(){
     cout<<"Enter the value of a and b"<<endl;
     cin>>a>>b;
     c=a+b;
     cout<<"The ans is:"<<c;
     cout<<endl;
}
class Child:public Parent
{
	      int x,y,z;
	      public:
		    Child()
			 {
			  x=40;
			  y=20;
			  z=0;
			  cout<<"This is child class constructors"<<endl;
			 }
		     void sub();
};
void Child::sub()
{
  z=x-y;
  cout<<"This is the z:"<<z<<endl;
}
int main()
{
   clrscr();
   Child obj;
   obj.add();
   obj.sub();
   getch();

}