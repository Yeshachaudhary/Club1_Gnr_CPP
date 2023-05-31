#include<iostream.h>
#include<conio.h>
class Stack
{
   private:
	   int a[5];

   public:
	  void insert(int index,int element)
	  {

	      a[index] = element;
	      cout<<index<<a[index];
	      cout<<endl;

	  }



};
class Sample: protected Stack
{
   private:
	   int top;
   public:

	  void set_data()
	  {
		top=0;
	  }
	  void Push(int element1)
	  {
	    insert(top ,element1);
	    top++;
	  }
};
void main()
{
  clrscr();
  Sample s1;
  s1.set_data();
  s1.Push(33);
  s1.Push(34);
  s1.Push(36);
  getch();
}
