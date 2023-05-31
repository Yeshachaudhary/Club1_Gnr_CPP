#include<iostream.h>
#include<conio.h>
class book
{
   private:
   int bookid;
   char name[10];
   float price;

   public:
   void input()
   {
     cin>>bookid>>name>>price;
   }
   void display();
   };
void book :: display()
{
 cout<<endl<<"Book id:"<<bookid<<endl<<"Name:"<<name<<endl<<"Book price:"<<price;
}

void main()
{
  book b1;
  clrscr();
  b1.input();
  b1.display();
  getch();
}