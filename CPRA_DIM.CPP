#include<iostream.h>
#include<conio.h>
class A{
   private:
	int a,b;
   public:
	A(){
	  cout<<"A";
	}
	void set_data()
	{
	  cout<<"a:";
	  cin>>a;
	  cout<<endl<<"b:";
	  cin>>b;
	}
	void display()
	{
	  cout<<"a:"<<a<<endl;
	  cout<<"b:"<<b<<endl;
	}

};

class B:virtual public A{
    private:
	 int base,exp,i,r;
    public:
	B(){
	  cout<<"B"<<endl;
	}
	void p();
};
void B ::p(){
	  r=1;
	  cout<<"Base:";
	  cin>>base;
	  cout<<endl<<"exponant:";
	  cin>>exp;
	  for(i=1;i<=exp;i++)
	  {
	    r=r*base;
	  }
	  cout<<r;
	}

class C:virtual public A,public B{

    public:
	C(){
	  cout<<"C"<<endl;
	}


};
void main()
{
  clrscr();
  C c1;
  c1.set_data();
  c1.display();
  c1.p();
  getch();
}