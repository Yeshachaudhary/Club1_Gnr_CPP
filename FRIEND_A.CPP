#include<iostream.h>
#include<conio.h>
class Integer{
	     private:
		     int a,b;

	     public:
		    void setdata()
		    {
		      cin>>a;
		      cin>>b;
		    }
		    void display()
		    {
		      cout<<a<<endl<<b;
		    }
		    friend void add(Integer i1);
};
void add(Integer i1)
{
   cout<<i1.a+i1.b;

}
void main()
{
  clrscr();

    Integer i1;
    i1.setdata();
    add(i1);
  getch();
}