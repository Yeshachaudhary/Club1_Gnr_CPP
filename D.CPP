#include<iostream.h>
#include<conio.h>
class A{
	  int a,b,c;
	  public:
	       A(){
		 cout<<"This is the Default Constructor of A"<<endl;

		  }
		  void add();
	  public:
	      A(){
		cout<<"\nEnter the value of a and b"<<endl;
		cin>>a>>b;
		a+b;
		cout<<"\nThis is the value of c"<<c;
		}


}
class B:virtual public A{
	  int x,y,z;
	  public:
	       B(){
		 cout<<"This is the Default Constructor of B"<<endl;

		  }
		  void sub();
};
void B::sub(){
		cout<<"\nEnter the value of a and b"<<endl;
		cin>>x>>y;
		z=x-y;
		cout<<"\nThis is the value of z"<<z;
		}


}
class C:virtual public A{
	  int p,q,r;
	  public:
	       C(){
		 cout<<"This is the Default Constructor of C"<<endl;

		  }
		  void mul();
};
void C::mul(){
		cout<<"\nEnter the value of a and b"<<endl;
		cin>>p>>q;
		r=p*q;
		cout<<"\nThis is the value of r"<<r;
		}
}
