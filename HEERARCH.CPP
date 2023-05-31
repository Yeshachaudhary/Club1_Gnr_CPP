#include<iostream.h>
#include<conio.h>
class A{
	  int a,b,c;
	  public:
	      A(){
		a=5;
		b=10;
		c=0;
		cout<<"This is the Default Constructor of A"<<endl;
	      }
	      void add();


};
void A::add()
{
       c=a+b;
       cout<<"This is the value of c: "<<c<<endl;
}
class B:virtual public A{
	  int x,y,z;
	  public:
	      B(){
		x=15;
		y=20;
		z=0;
		cout<<"This is the Default Constructor of B"<<endl;
	      }
	      void sub();


};
void B::sub()
{
       z=x-y;
       cout<<"This is the value of z: "<<z<<endl;
}
class  C:public  virtual A{
	  int p,q,r;
	  public:
	      C(){
		p=2;
		q=3;
		r=0;
		cout<<"This is the Default Constructor of C"<<endl;
	      }
	      void mul();


};
void C::mul()
{
       r=p*q;
       cout<<"This is the value of r: "<<r<<endl;
}
class D:public B,public C{
	  int s,t,u;
	  public:
	      D(){
		s=10;
		t=2;
		u=0;
		cout<<"This is the Default Constructor of D"<<endl;
	      }
	      void div();


};
void D::div()
{
       u=s/t;
       cout<<"This is the value of u: "<<u<<endl;
}
int main()
{
 clrscr();
 D obj;
 obj.add();
 obj.sub();
 obj.mul();
 obj.div();
 getch();
}