#include<iostream>
using namespace std;
class LinkedList
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *start;
public:
    LinkedList()
    {
        start = NULL;
    }
    void insertatparticular(int old_data,int data);
    void insertatfirst(int data);
    node *search_ele(int data){
    node *t;
    if(start=NULL)
    {
        return NULL;
    }
    else{
        t=start;
        while(t!=NULL)
        {
            if(t->item=data)
            {
                return t;
            }
            t=t->next;
        }
        return NULL;

    }
    }
};
void LinkedList::insertatfirst(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
void LinkedList::insertatparticular(int old_data,int data)
{
    node *n,*t = new node;
    n->item=data;
    t=search_ele(old_data);
    if(t==NULL){
        cout<<"\nError";
    }
    else{
        n->next=t->next;
        t->next=n;
    }
}
main()
{
    LinkedList l1;
    l1.insertatfirst(1);
    l1.insertatfirst(2);
    l1.insertatparticular(2,20);
}
