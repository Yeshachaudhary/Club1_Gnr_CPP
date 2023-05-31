//multiple
#include<iostream.h>
#include<conio.h>
class base1
{
  private:
	  int a,b;
  public:
	  void set()
	 {
	  cout<<endl<<"a:";
	  cin>>a;
	  cout<<endl<<"b:";
	  cin>>b;
	 }

};
class base2
{
  private:
	  int x,y;
  public:
	 void set_data()
	 {
	  cout<<endl<<"x:";
	  cin>>x;
	  cout<<endl<<"y:";
	  cin>>y;
	 }

};
class Child : public base1,public base2
{
    public:
	 Child()
	 {
	  cout<<"Child construct";
	 }

};
void main()
{
  clrscr();
  Child c1;
  c1.set();
  c1.set_data();

  getch();
}