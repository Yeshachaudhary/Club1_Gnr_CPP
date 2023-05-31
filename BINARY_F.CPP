#include<iostream.h>
#include<conio.h>
class A
{
  private:
	  int a;
	  int b;
  public:
	  A()
	  {
	   a=0;
	   b=0;
	  }
	  A(int r,int i)
	  {
	    a=r;
	    b=i;
	  }
	  void Display()
	  {
	    cout<<a<<"+i"<<b;
	  }
	  friend A operator + (A cl,A c2);

};
A operator + (A c1,A c2)
{
	A temp;
	temp.a=c1.a+c2.a;
	temp.b=c1.b+c2.b;
	return temp;
}
int main()
{
   A c1(5,3),c2(10,5),c3;
   c1.Display();
   cout<<"+";
   c2.Display();
   cout<<"=";
   c3=c1+c2;
   c3.Display();
   getch();
   return 0;

}