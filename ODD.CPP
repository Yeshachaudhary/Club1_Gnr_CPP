#include<iostream.h>
#include<conio.h>
void main()
{
  int a[30],i,b[30],k;
  clrscr();
    for(i=0;i<30;i++)
    {
      a[i]=i+1;
    }
     k=0;
    for(i=0;i<30;i++)
    {
      if(a[i]%2!=0)
      {
       b[k]=a[i];
       k++;
      }
    }

    for(i=0;i<k;i+=2)
    {
      cout<<b[i]<<"\t";
    }


  getch();
}