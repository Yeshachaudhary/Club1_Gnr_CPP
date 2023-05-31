#include<iostream.h>
using namespace std;
void main()
{
  
    cout<<"Welcome to Royal";
    try
    {
     int x = 3;
       if(x==1)
       {
	 throw x;
       }
       else if(x==2)
       {
	 throw x;
       }
       else
       {
	 throw x;
       }
       cout<<endl<<"Inside Try block";

    }
    catch(int a)
    {
      cout<<endl<<"Catch block is Executed "a;
    }
  
}