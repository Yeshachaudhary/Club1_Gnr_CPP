#include<iostream.h>
#include<conio.h>
void search(int a[] ,int key);
void main()
{
 int a[5],i,key;
 clrscr();
    cout<<"Enter array";
    for(i=0;i<=4;i++)
    {
     cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;
    search(a,key);
 getch();
}
void search(int a[] ,int key)
{
  int min,max,mid;

  min=0;
  max=4;
  while(max>=min)
  {
    mid=(min+max)/2;
  if(a[mid]==key)
  {
    cout<<mid<<endl;
  break;
  }
  else
  {
  if(key>a[mid])
  {
    min=mid+1;
  }
  else
  {
    max=mid-1;
  }

   }
  }



}