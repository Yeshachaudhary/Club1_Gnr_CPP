#include<iostream>
#include<utility>
using namespace std;
main()
{
    pair<string,string> p1;
    pair<int,int> p2 {10,20};
    p1 = make_pair("Yesha","Chaudhary");
    cout<<p1.first;
    cout<<p2.second;
}
