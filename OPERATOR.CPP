#include<iostream.h>
#include<conio.h>
class Sample{
	    int a,b,c,d,e;
	    public:
		   Sample(){
			 a=0;
			 b=0;
			 c=0;
			 d=0;
			 e=0;
		   }
		   Sample operator +(Sample obj1)
			{
			  Sample temp;
			  temp.a=a+obj1.a;
			  temp.b=b+obj1.a;
			  temp.c=c+obj1.a;
			  temp.d=d+obj1.a;
			  temp.e=e+obj1.a;
			  return temp;
			}
		   void output()
			{
			  cout <<"\nThis are the value of a,b,c,d,e\n";
			  cout<<"a is :"<<a<<"b is :"<<b<<"c is :"<<c<<"d is :"<<d<<"e is:"<<e;
			}
		   void input()
			{
			  cout<<"\nEnter a,b,c,d,e";
			  cin>>a>>b>>c>>d>>e;
			}

};
int main(){
	clrscr();
	Sample t1,t2,t3,t4,t5,t6;
	t1.input();
	t2.input();
	t3.input();
	t4.input();
	t5.input();
	t6=t1+t2+t3+t4+t5;
	t1.output();
	t2.output();
	t3.output();
	t4.output();
	t5.output();
	t6.output();
	getch();
	return 0;


}
