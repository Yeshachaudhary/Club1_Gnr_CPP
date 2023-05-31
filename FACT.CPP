#include<iostream.h>
#include<conio.h>
int pri(int num);
void main()
{
  clrscr();
   cout<<pri(5);
  getch();
}
int pri(int num)
{
   if(num == 1)
   {
      return 1;
   }
   return num * pri(num-1);

}