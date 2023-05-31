#include<iostream>
using namespace std;
main()
{
    int v,w,ttw,tw,tfw,fw;
    cout<<"Enter total number of vehicle:";
    cin>>v;
    cout<<"\nEnter total number of wheels:";
    cin>>w;

    ttw=(v*4)-w;//total two wheel
    tw=ttw/2;
    cout<<"\n Two wheeler:"<<tw;

    tfw=w-ttw;
    fw=tfw/4;
    cout<<"\n Four wheeler:"<<fw;
}
