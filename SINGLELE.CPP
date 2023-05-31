#include<iostream.h>
#include<conio.h>
class Alto{
      private:
	      int gear;
      public:
	     Alto()
	     {
	       cout<<"This is Alto construct"<<endl;
	     }
	     void alto(int g1)
	     {
	       if(g1<=5)
	       {
		g1++;
		cout<<endl<<"gear:"<<g1;
	       }
	     }

};
class Ferrari : public Alto{
       public:
	      Ferrari()
	      {
	       cout<<"\nThis is Ferrari construct";
	      }
};
void main()
{

  clrscr();
  Ferrari f1;
  f1.alto(4);



  getch();
}