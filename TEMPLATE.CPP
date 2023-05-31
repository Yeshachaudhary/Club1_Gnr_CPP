#include<iostream.h>
#include<conio.h>

template <class H> class Sample{
      public:
	     H a,b;
      H sum(H x,H y)
      {
	 a=x;
	 b=y;
	 return a+b;
      }
      /*template <class D,class G>
      G sub(D n,G m)
      {
	return n-m;
      }
      */

};
void main()
{
  Sample<int> s1;
  clrscr();
  cout<<s1.sum(10,20);
  //cout<<s1.sub(40,3);

  getch();
}