#include<iostream>
using namespace std;
main()
{   //3,5,2,1,6,
    //1+1+1=3
    int arr[5],max,add=1;
    int i;
    cout<<"Enter elements:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    //cout<<max;
    for(i=0;i<5;i++)
    {
       if(arr[i]>max)
       {
           add++;
           max=arr[i];
           //cout<<max<<" ";
       }
    }
    cout<<"\ncount:"<<add;
}
