#include<iostream.h>
#include<conio.h>
class Shape
{
       private:
	       int length,breadth,width;
	       float area;
       public:
	      Shape()
	      {
	       length=20;
	       breadth=40;
	       width=60;
	       cout<<"AREA"<<endl;
	      }
};
class Triangle:public Shape
{
	 int length,breadth,width;
	       float area;
      public:
	    Trinagle(){
		       area=(length*breadth)/2;
		       cout<<"Area of triangle is: "<<area<<endl;
		      }
};

class Square:public Shape
{
	  int length,breadth,width;
	       float area;
	 public:
		Square()
		       {
		       area=length*length;
		       cout<<"Area of square is: "<<area<<endl;
		       }
};
class Rectangle:public Shape
{
	  int length,breadth,width;
	       float area;
	 public:
		 Rectangle()
		   {
		       area=length*breadth;
		       cout<<"Area of Rectangle is: "<<area<<endl;
		   }
};

void main()
{
 clrscr();
 Triangle obj;
 //Square obj;
 //Rectangle obj;

 getch();
}