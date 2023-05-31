#include<iostream>
// #include<conio.h>
#include<math.h>
using namespace std;
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
class  D:public  virtual A{
	  int s,t,u;
	  public:
	      D(){
		s=2;
		t=3;
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
class  E:public  virtual A{
	  int n,m,f;
	  public:
	      E(){
		n=2;
		m=3;
		f=0;
		cout<<"This is the Default Constructor of E"<<endl;
	      }
	      void power();


};
void E::power()
{

      f=pow(n,m);

       cout<<"This is the value of r: "<<f<<endl;
}
class F:public B,public C{
	  int n1,n2,ans;
	  public:
	      F(){
		n1=10;
		ans=0;
		cout<<"This is the Default Constructor of F"<<endl;
	      }
	      void area();


};
void F::area()
{
       ans=n1*n1;
       cout<<"This is the value of area: "<<ans<<endl;
}
class G:public  D,public E{
	  int n2,n3,n4,ans2;
	  public:
	      G(){
		n2=10;
		n3=20;
		n4=3;
		ans2=0;
		cout<<"This is the Default Constructor of G"<<endl;
	      }
	      void cube();


};
void G::cube()
{
       ans2=n2*n3*n4;
       cout<<"This is the value of area: "<<ans2<<endl;
}
class H:public F,public G{
	  int n5;
	  float n6,n7,ans3;
	  public:
	      H(){
		n5=3.14;
		n6=20;
		n7=3;
		ans3=0;
		cout<<"This is the Default Constructor of H"<<endl;
	      }
	      void cricle();


};
void H::cricle()
{
       ans3=n5*n6*n7;
       cout<<"This is the value of area: "<<ans3<<endl;
}
int main()
{

H obj;
 obj.add();
 obj.sub();
 obj.mul();
 obj.div();
 obj.power();
 obj.area();
 obj.cube();
 obj.cricle();

}


