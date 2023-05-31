#include<iostream.h>
#include<utility>
#include<conio.h>
class student
{
private:
    int id;
    string name;
    // char name[10];


public:
    void set_data(int x, string n)
    {
	id = x;
	name = n;
    }

    void display()
    {
	cout<<id<<" "<<name;
    }
};


// city - Ahm, 23 - Panchmahal, 89 - 90, 78 - student  char name[10]

main()
{
    clrscr();
    //array <int, 5> arr1 = {10,20,30};
    pair <string,string> p1;
    pair <int, string> p2;
    pair <int, int> p3;
    pair <int,float> p4;
    pair <int, student>p5;

    p1 = make_pair("City", "Ahm");
    p2 = make_pair(23,"PanchMahal");
    p3 = make_pair(89,90);
    p4 = make_pair(78,21.45);

    student s1;
    s1.set_data(33,"Manoj");
    p5 = make_pair(78,s1);

    cout<<"Pair - 1"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
     cout<<"Pair - 2"<<endl;
    cout<<p2.first<<" "<<p2.second;

   // s1 = p3.second;
    cout<<p5.first<<" "<<p5.second;

    getch();
}