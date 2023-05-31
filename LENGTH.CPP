#include<iostream.h>
#include<conio.h>
class Shape{
	  private:
		  int length,breadth;
		  float r,c;
	  public:

void area(float r)
{
		  c=(3.14)*r*r;
		  cout<<"The Area of cricle is"<<c<<endl;
}
void area(int length)
{
     c=length*length;
     cout<<"The Area of cricle is"<<c<<endl;
}
void area(int length ,int breadth)
{
     c=length*breadth;
     cout<<"The Area of Rectangle is"<<c<<endl;
}
};
int main()
{
     clrscr();
     Shape obj;
     obj.area(2.0f);
     obj.area(20);
     obj.area(40,40);
     getch();
     return 0;
}
