#include<iostream.h>
#include<conio.h>
class p{
       private:
       int a,b,c;
       public:
	 void set()
	 {
	  cin>>a;
	  cin>>b;
	 }
	 void add()
	 {
	   c=a+b;
	   cout<<"c:";
	   cout<<c;
	 }

};
class c:public p{
	 int a,b,c;
	 public:

	 void sub()
	 {
	   c=a-b;
	   cout<<c;

	 }
};


void main()
{
  p p1,p2;
  c c2;
  clrscr();
  c2.set();
  c2.sum();
  c2.sum();
  getch();
}