#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> v1 {10};
    vector <int> v2 (5);
    vector <int> v3 (3);
    cout<<v1.capacity();
    v1.push_back(500);
    cout<<endl<<v1.capacity();
    v1.push_back(1500);
    v1.push_back(1600);
    cout<<endl<<v1.capacity();
    v1.push_back(1800);
    cout<<endl<<v1.size();
    cout<<endl<<v1.capacity();
    cout<<v1[0]<<endl;
    cout<<v2.at(4);
    cout<<endl<<v1.front();
    cout<<endl<<v1.back();
    vector <int> :: iterator i1 = v1.begin();

    v1.insert(i1+2,7000);

    while(i1!=v1.end())
    {
      cout<<*i1<<endl;
      i1++;
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
}
