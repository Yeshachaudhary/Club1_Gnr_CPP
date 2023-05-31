#include<iostream.h>
#include<conio.h>
class UnaryFriend
{
     int a;
     int b;
     int c;
     public:
	    void getvalues()
	    {
	       cout<<"Enter the values of A,B,C";
	       cin>>a>>b>>c;
	    }
	    void show()
	    {
	       cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;

	    }
	    void friend operator-(UnaryFriend&x);


};
void operator-(UnaryFriend&x)
{
    x.a=-x.a;
    x.b=-x.b;
    x.c=-x.c;

}
int main()
{
  clrscr();
  UnaryFriend x1;
  x1.getvalues();
  cout<<"Before Overloading\n";
  x1.show();
  cout<<"After Overloading";
  -x1;
  x1.show();

  getch();
}