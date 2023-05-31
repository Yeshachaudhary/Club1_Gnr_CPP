#include<iostream.h>
#include<conio.h>
#define LEFT 1
#define RIGHT 0
void shift(int a[] ,int l,int s );
void main()
{
  int a[10],i,s,l;
  clrscr();
    cout<<"Enter array"<<endl;
    for(i=0;i<10;i++)
    {
      cin>>a[i];
    }

    cout<<"Enter shift"<<endl;
    cin>>s;

    cout<<"Left or Right"<<endl;
    cin>>l;

    shift(a,l,s);

  getch();
}
void shift(int a[] ,int l,int s)
{
   int i,temp;

      if(l==RIGHT)
    {
	 while(s)
	 {
	    temp=a[9];
		for(i=9;i>=1;i++)
		  {
		      a[i]=a[i-1];
		  }
	      a[0]=temp;
	      s--;
	 }//end of while
    }//end of if

   else if(l==LEFT)
  {
       while(s)
	   {
		temp=a[0];
		  for(i=0;i<=8;i++)
		     {
		       a[i]=a[i+1];
		     }
		     a[9]=temp;
		     s--;
	   }
  }

  for(i=0;i<10;i++)
  {
      cout<<a[i];
  }

}