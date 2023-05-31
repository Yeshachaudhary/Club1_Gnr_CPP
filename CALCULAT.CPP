#include<iostream.h>
#include<conio.h>
#include<math.h>
class Calculator{
	  private:
		 int a,b,c,r,i;
		 float area,f,z;
	  public:
		void add();//Declaration of the function
		void sub(){
			  cout<<"Enter the value of a and b"<<endl;
			  cin>>a;
			  cin>>b;
			  c=a-b;
			  cout<<"Subraction:"<<c;
			  cout<<endl;
			  }
		void mul(){
			   cout<<"Enter the value of a and b"<<endl;
			   cin>>a>>b;
			   c=a*b;
			   cout<<"Multiplication: "<<c;
			   cout<<endl;
			  }
		void div(){
			   cout<<"Enter the value of a and b"<<endl;
			   cin>>a>>b;
			   c=a/b;
			   cout<<"Division:"<<c;
			   cout<<endl;
			  }
		void power(){
			     cout<<"Enter the value of a and b"<<endl;
			     cin>>a>>b;
			     c=pow(a,b);
			     cout<<"Power:"<<c;
			     cout<<endl;
			    }
		void even();

		void cricle()
			    {
			     cout<<"Enter r"<<endl;
			     cin>>a;
			     area=(3.14)*a*a;
			     cout<<"The Area of cricle is"<<area<<endl;
			     cout<<endl;
			    }
		void square()
			    {
			     cout<<"Enter l"<<endl;
			     cin>>a;
			     area=a*a;
			     cout<<"The Area of square is"<<area<<endl;
			     cout<<endl;
			    }
		void rectangle()
			    {
			     cout<<"Enter length and breadth"<<endl;
			     cin>>a>>b;
			     area=a*b;
			     cout<<"The Area of rectangle is"<<area<<endl;
			     cout<<endl;
			    }
		void triangle()
			    {
			     cout<<"Enter length and breadth"<<endl;
			     cin>>a>>b;
			     area=0.5*a*b;
			     cout<<"The Area of tringle is"<<area<<endl;
			     cout<<endl;
			    }
		void cuboid()
			    {
			     cout<<"Enter length ,breadth and width"<<endl;
			     cin>>a>>b>>c;
			     area=a*b*c;
			     cout<<"The Area of cuboid is"<<area<<endl;
			     cout<<endl;
			    }


		void feet();
		void inch();
		void cm();
		void inch2();
		void vote();
		void table();
};
void Calculator::add(){
		  cout<<"Enter the value of a and b"<<endl;
		  cin>>a>>b;
		  c=a+b;
		  cout<<"Addition:"<<c;
		  cout<<endl;

}
void Calculator::even()
{
	       cout<<"Enter any number"<<endl;
	       cin>>a;
	       if(a%2==0)
	       {
		cout<<"Even number"<<endl;
	       }
	       else
	       {
		cout<<"Odd number"<<endl;
	       }
	       cout<<endl;
}
void Calculator::feet()
{
		      cout<<"Feet to inch"<<endl;
		      cout<<"Enter feet"<<endl;
		      cin>>f;
		      z=f*12;
		      cout<<"inch"<<z;
		      cout<<endl;
}

void Calculator::inch()
{

		      cout<<"inch to feet"<<endl;
		      cout<<"Enter inch"<<endl;
		      cin>>f;
		      z=f/12;
		      cout<<"feet"<<z;
		      cout<<endl;

}
void  Calculator::cm()
{
		      cout<<"Feet to inch"<<endl;
		      cout<<"Enter feet"<<endl;
		      cin>>f;
		      z=c/2.54;
		      cout<<"Inch"<<z;
		      cout<<endl;

}
void Calculator::inch2()
{
		      cout<<"inch to cm"<<endl;
		      cout<<"Enter inch"<<endl;
		      cin>>f;
		      z=f*2.54;
		      cout<<"centimeter"<<z;
		      cout<<endl;

}
void Calculator::vote()
{
	       cout<<"Enter Your age"<<endl;
	       cin>>a;
	       if(a>=18)
	       {
		cout<<"You are eligible for vote"<<endl;
	       }
	       else
	       {
		cout<<"You are not eligible for vote"<<endl;
	       }
	       cout<<endl;
}
void Calculator::table()
{
	       cout<<"Enter any number"<<a;
	       cin>>a;

   for(i=0;i<11;i++)
   {
	 cout<<a<<"*"<<i<<"="<<a*i;
   }
   cout<<endl;

}
int main()
{
   clrscr();
    Calculator obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.power();
    obj.even();
    obj.vote();
    obj.cricle();
    obj.square();
    obj.rectangle();
    obj.triangle();
    obj.cuboid();
    obj.feet();
    obj.inch();
    obj.cm();
    obj.inch2();
    obj.table();
    getch();
   return 0;
}

