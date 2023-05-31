#include<iostream.h>
#include<conio.h>
class Alto
{
	private:
	 int gear;
	public:
	       Alto()
	       {
		 cout<<gear;
	       }
	       void increase_gear()
		{
			if(gear<5)
			{
				gear++;
				cout<<gear;
			}
		}



};

class Ferrari:public Alto{

};
main()
{
	clrscr();
	Ferrari f1;
	f1.increase_gear();
	getch();
}