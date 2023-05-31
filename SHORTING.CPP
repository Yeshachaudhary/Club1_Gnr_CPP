#include<iostream.h>
#include<conio.h>

void main()
{
  int a[3][3],b[9],i,j,k=0,temp;
  clrscr();
    cout<<"Enter array";
       for(i=0;i<3;i++)
       {
	  for(j=0;j<3;j++)
	  {
	    cin>>a[i][j];
	  }
       }

	     for(j=0;j<3;j++)
		    {
			for(i=0;i<3;i++)
			{
			  b[k]=a[j][i];
			  k++;

			}
		     }



       for(i=0;i<9;i++)
       {
	for(j=i+1;j<9;j++)
	{
	 if(b[j] < b[i])
	 {
	  temp=b[i];
	  b[i]=b[j];
	  b[j]=temp;
	 }
	}
      }

      for(i=0;i<9;i++)
       {
	 cout<<b[i];
       }
		 k=0;
		for(j=0;j<3;j++)
		    {
			for(i=0;i<3;i++)
			{
			  a[j][i]=b[k];
			  k++;
			}
		     }
		  cout<<endl;
	      for(j=0;j<3;j++)
		    {
			for(i=0;i<3;i++)
			{
			 cout<<a[j][i];
			}
			cout<<endl;
		     }



  getch();
}