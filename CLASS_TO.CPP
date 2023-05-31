#include<iostream.h>
#include<conio.h>
class First{
	    public:
		  char *a;
		  First(){
		      a="Royal";
		  }
		  char* get_string(){
		    return (a);
		  }
		  void display()
		  {
		    cout<<a<<endl;
		  }

};
//class to class converted
class Second {
	     char *b;
	     public:
		    void operator=(First a)
		    {
		     b=a.get_string();
		    }
		    void display()
		    {
		     cout<<b<<endl;
		    }

};
int main(){
   clrscr();
 //Type one
   First a;
 //Type two
   Second b;
   //type conversion
   b=a;
   a.display();
   b.display();
   getch();
   return 0;
   //getch();
}