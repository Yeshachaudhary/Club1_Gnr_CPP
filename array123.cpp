#include<iostream.h>
#include<array>
main()
{
   array <int,4>={10,20,34,50};
   cout<<s1.size()<<endl;
   cout<<s1[3];
   cout<<endl<<s1.at(2);
   cout<<endl<<s1.begin();
   cout<<endl<<s1.end();
   cout<<endl<<s1.back();
   array <int,4>s2 ={20,30,90,53};
   s1.swap(s2);

   for(int i=0;i<4;i++)
   {
     cout<<endl<<s1[i];    
   } 

}