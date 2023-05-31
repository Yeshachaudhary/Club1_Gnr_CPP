#include<iostream.h>
#include<conio.h>
struct book
{
  int bookid;
  char name[10];
  float price;
};
book input()
{
   book b1;
   cin>>b1.bookid>>b1.name>>b1.price;
   return b1;
}
void display(book b2)
{

   cout<<"book id:"<<b2.bookid<<endl<<"book name:"<<b2.name<<endl<<"book price:"<<b2.price;
}
void main()
{
  clrscr();
  book x;
  x=input();
//  display(x);
  x.price=500;
  display(x);
  getch();
}