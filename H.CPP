#include<iostream.h>
#include<conio.h>
class A{
    public:
	   A(){
	   cout<<"Class A";
	   }

};
class B:public A{
   public:
	  B(){
	  cout<<"Class B";
	  }
};
class C: public A{
   public:
	  C(){
	  cout<<"Class C";
	  }

};
class D:public A{
   public:
	  D(){
	  cout<<"Class D";
	  }
};
void main()
{
 clrscr();
  D d1;
  B b1;
  C c1;


 getch();
}