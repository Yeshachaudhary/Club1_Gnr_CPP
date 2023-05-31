#include<iostream.h>
#include<conio.h>
class Integer{
	     private:
		     int x;

	     public:
		    void setdata()
		    {
		      cin>>x;
		    }
		    void display()
		    {
		      cout<<x;
		    }
		    Integer operator++()
		    {
		      Integer temp;
		      temp.x = ++x;
		      return temp;
		    }
		    Integer operator++(int)
		    {
		      Integer temp;
		      temp.x = x++;
		      return temp;
		    }



};
void main()
{
  clrscr();

    Integer i1,i2,i3,i4;
    i1.setdata();
    i1.display();

    i3=++i1;
    i4=i1++;
    i3.display();
    i4.display();
  getch();
}