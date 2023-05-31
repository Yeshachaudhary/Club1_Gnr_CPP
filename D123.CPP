#include<iostream.h>
#include<conio.h>
class A{
     private :
	     int a;
     public :
	     void input(){
	      cout<<"class A";


	     }

};
class B: virtual public A{

     public :
	     int b;
	     void display()
	     {
	       cout<<endl<<"Class B";
	     }

};
class C: virtual public A{

    public :
	     int c;
	     void func()
	     {
	      cout<<"class C";
	     }
};
class D: public B,public C{

   public :
	   int d;
	   void fond()
	   {
	     cout<<"class D";
	   }
};
void main()
{
  D d1;
  clrscr();
  cout<<sizeof(d1);


  getch();
}