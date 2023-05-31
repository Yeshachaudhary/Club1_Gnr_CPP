#include<iostream.h>
#include<conio.h>
class Complex
{
  public:
     Complex()
     {
      cout<<"\n\nConstructor1";
     }

     ~Complex()
     {
      cout<<"\tDestructor called";
     }
};
void main()
{
   Complex c1;

  getch();

}