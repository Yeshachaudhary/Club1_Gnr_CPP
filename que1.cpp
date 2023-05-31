#include<iostream>
using namespace std;
main()
{   //6 4 9 8 9 6 9
    int t,e[10],l[10],i,sum=0,add=0;
    cout<<"Enter time:";
    cin>>t;
    cout<<"Entry:";
    for(i=0;i<t;i++)
    {
        cin>>e[i];
    }
    cout<<"Exit:";
    for(i=0;i<t;i++)
    {
        cin>>l[i];
    }
    for(i=0;i<t;i++)
    {
        sum+=e[i]-l[i];
        //cout<<sum<<" ";
        //add=sum;
        if(add<sum)
        {
            //cout<<add;
            add=sum;
        }
    }
  cout<<add;
}
