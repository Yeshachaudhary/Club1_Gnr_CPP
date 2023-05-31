#include<iostream.h>
#include<conio.h>
class Time
{
     int hrs,min;
     public:
	    Time(int,int); //constructor
	    operator int();//casting operator function
};
Time::Time(int a,int b)
{
     cout<<"Constructor called with two parameters"<<endl;
     hrs=a;
     min=b;
}
Time::operator int()
{
     cout<<"class type to basic type conversion"<<endl;
     return(hrs*60+min);
}
void main()
{
     clrscr();
     int h,m,duration;
     cout<<"Enter Hours";
     cin>>h;
     cout<<"Enter min";
     cin>>m;
     Time t(h,m);
     duration=t;
     cout<<"Total Minutes are: "<<duration;
     /*
     cout<<"2nd method operator overloading"<<endl;
     duration=t.operator int();
     cout<<"Total Minutes are:"<<duration;
     */

     getch();
}

