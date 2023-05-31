//multilevel
#include<iostream.h>
#include<conio.h>
class parent
{
   private:

   public:
	parent()
	{
	  cout<<"parent construct\n";
	}

};
class child : public parent
{

  public:
	 child()
	 {
	   cout<<"child construct\n";

	 }

};
class subchild : public child
{
  private:
	  int a,b;
  public:
	  subchild(int a,int b)
	  {
	    cout<<"subchild construct\n";
	    cout<<a+b;
	  }
};
void main()
{
  clrscr();
  subchild c1(10,20);
  getch();
}