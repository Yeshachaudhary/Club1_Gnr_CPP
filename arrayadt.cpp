#include<iostream>
using namespace std;

class ArrayADT
{
private:
    int capacity;
    int last_index;
    int *ptr;

public:
    ArrayADT()
    {
        capacity = 0;
        last_index = -1;
        ptr = NULL;
    }
    void createArray(int capacity);
    void add_element(int index,int element);
    int showdata(int index);
    void del(int index);
    int search_ele(int index);
    void sort_ele();
    void rev();
};
void ArrayADT::createArray(int capacity)
{
    this->capacity = capacity;
    ptr = new int [capacity];
    last_index = -1;
    cout<<"Created";
}
void ArrayADT::add_element(int index,int element)
{
    int i;
    if(index == last_index)
    {
        cout<<"\nArray Overflow";
    }
    else if(index < 0 || capacity <= index)
    {
        cout<<"\nInvalid Index";
    }
    else if(index > last_index+1)
    {
        cout<<"\nInvalid Data";
    }
    else if(index <= last_index)
    {
        last_index++;
        i = last_index;
        while(i != index)
        {
            ptr[i] = ptr[i-1];
            i--;
        }

        ptr[index] = element;
    }
    else
    {
        ptr[index] = element;
        last_index++;
    }
}
void ArrayADT::del(int index)
{
    int i;
    i=index;
    if(index < last_index)
    {
        while(i < last_index)
        {
            ptr[i]= ptr[i+1];
            i++;
        }
       last_index--;
    }
    else
    {
        ptr[index] = 0;
        index--;
    }
}
int ArrayADT::search_ele(int index)
{
    if( index < 0|| index >last_index)
    {
        cout<<"Data Not Found";
        return-1;

    }
    else
    {
        return ptr[index];
    }
}
void ArrayADT::sort_ele()
{
    int i,j,temp;
    for(i=0;i<capacity;i++)
    {
        for(j=i+1;j<capacity;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    cout<<"Array after sorting";
    for(i=0;i<capacity;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
void ArrayADT::rev()
{
    int i;
    for(i=last_index;i>=0;i--)
    {
       cout<<endl<<ptr[i];
    }
}
int ArrayADT::showdata(int index)
{
    if(index < 0 || capacity <= index)
    {
        return -1;
    }
    else
    {
        return ptr[index];
    }
}
main()
{
    ArrayADT a1;
    a1.createArray(6);
    a1.add_element(0,10);
    a1.add_element(1,20);
    a1.add_element(2,30);
    a1.add_element(3,40);
    a1.add_element(4,25);

    cout<<endl<<a1.showdata(0);
    cout<<endl<<a1.showdata(1);
    cout<<endl<<a1.showdata(2);
    cout<<endl<<a1.showdata(3);
    cout<<endl<<a1.showdata(4);
  // cout<<endl<<a1.showdata(4);
   // a1.del(4);
    //cout<<a1.showdata(4);
    //cout<<a1.search_ele(2);
    //a1.sort_ele();
    a1.rev();


}
