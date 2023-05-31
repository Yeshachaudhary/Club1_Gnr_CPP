#include<iostream.h>
#include<conio.h>
class A{

     public:
	    void fun1()
	    {
	      cout<<"\nclass A fun1";
	    }
	    void virtual fun2()
	    {
	      cout<<"\nclass A fun2";
	    }
	    void virtual fun3()
	    {
	      cout<<"\nclass A fun3";
	    }
	    void fun4(int)
	    {
	      cout<<"\nClass A fun4";
	    }


};
class B : public A{

	  public:
		 void fun()
		 {
		   cout<<"\nclass B fun";
		 }
		 void fun3()
		 {
		   cout<<"\nclass B fun3";
		 }
		 void fun4(int)
		 {
		   cout<<"\nclass B fun 4 with arg";
		 }
};
void main()
{
  A a1,*p;
  B b1,*q;
  clrscr();
  p=&b1;
  q=&b1;
  q->fun1();
  p->fun3();
  p->fun4(23);
  q->fun4(4);
  p->fun1();
  getch();

}