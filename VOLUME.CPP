#include<iostream.h>
#include<conio.h>
class Shape
{
	int length,breadth,r,width;
	float v;
	public:
	       Shape()
	       {
		 r=20;
		 v=1.33*3.14*r*r*r;
		 cout<<"Volume of sphere"<<v<<endl;
	       }
	       Shape(int a, int b,int c)
	       {
		 length=a;
		 breadth=b;
		 width=c;
		 v=a*b*c;
		 cout<<"Volume of cuboid"<<v<<endl;
	       }
	       Shape(Shape &obj)
	       {
		 length=obj.length;
		 breadth=obj.breadth;
		 r=20;
		 v=3.14*r*r*(length/3);
		 cout<<"Volume of cone"<<v<<endl;
	       }
};
int main()
{
   clrscr();
   Shape obj;
   Shape obj1(4,5,6);
   Shape obj2(obj1);
   getch();
}


