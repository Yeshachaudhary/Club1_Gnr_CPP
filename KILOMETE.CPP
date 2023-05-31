#include<iostream.h>
#include<conio.h>
class Kilometers
{
    private:
	    double kilometers;
    public:
	   Kilometers(double k)
	   {
	      kilometers=k;
	   }
	   void display()
	   {
	      cout<<kilometers<<"kilometeres";
	   }
	   double getValue()
	   {
	      return kilometers;
	   }


};
class Miles
{
    private:
	    double miles;
    public:
	    Miles(double m)
	    {
	     miles=m;
	    }
	    void display()
	    {
	       cout<<miles<<"miles";
	    }
	    operator Kilometers()
	    {
	       return Kilometers(miles*1.609344);
	    }
	    Miles(Kilometers k)
	    {
	       miles = k.getValue()/1.609344;
	    }


};
int main(void)
{
   clrscr();
   //Converting using the conversion function
    Miles m1=100;
    Kilometers k1=m1;
    m1.display();
    cout<<"=";
    k1.display();
    cout<<endl;
    //converting using the constructor
    Kilometers k2=100;
    Miles m2=k2;
    k2.display();
    cout<<"=";
    m2.display();
    cout<<endl;
    getch();
    return 0;
}
