#include<iostream>
using namespace std;
main()
{
    int r,c,a[10][10],sum,i,j,add,k=0;
    cout<<"Enter row and colum:";
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    add=0;
    for(i=1;i<=r;i++)
    {
       sum=0;
        for(j=1;j<=c;j++)
        {
            sum+=a[i][j];
        }
        //add=sum;
        //cout<<add;
        if(add<sum)
        {
            add=sum;
            cout<<add;
            k=i;

        }
       // cout<<add;
    }
   // cout<<add;
    cout<<k;

}
