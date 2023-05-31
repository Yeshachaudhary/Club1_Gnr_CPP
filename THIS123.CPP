#include<iostream.h>
#include<conio.h>
class Area{
  private:
	 int l,b,h;
  public:
	 void set_data(int l,int b,int h)
	 {
	   this->l=l;
	   this->b=b;
	   this->h=h;
	   cout<<l<<b<<h;
	 }


};
void main()
{
  clrscr();
  Area a1;
  Area *p;
  p = &a1;

  p->set_data(10,20,30);

  getch();
}