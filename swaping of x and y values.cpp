#include<iostream>
using namespace std;
struct node
{
    struct node *link;
    int value;
}*start=NULL,*last=NULL;
typedef struct node node;
int length=0;

void create()
{
    node *ptr,*temp;
     int n;
  cout<<"enter the values";
  while(1)
  {
   cin>>n;
   if(n==-1)
   {
       break;
   }
   ptr=new node;
   ptr->value=n;
   if(start==NULL)
   {
       start=ptr;
   }
   else
   {
       temp->link=ptr;
   }
   temp=ptr;
   }
   ptr->link=NULL;
 last=ptr;
 }

void swaping()
{
    node *temp1,*temp2,*temp3,*next;
    cout<<"enter the x and y values respectively";
    int x,y;
    cin>>x>>y;
    node *ptr;
    ptr=start;
    if(start->value==x&&last->value==y)
    {
        temp1=start;
        ptr=start;
        while(ptr->link!=last)
        {
        ptr=ptr->link;
        }
        temp2=ptr;
        last->link=start->link;
        temp2->link=start;
        start->link=NULL;
        start=last;


    }else
{


    while(ptr!=NULL)
    {
    if(ptr->link->value==x)
    {
    temp1=ptr;
    }

    if(ptr->link->value==y)
    {
    temp2=ptr;
    break;
    }
    ptr=ptr->link;
    }
    ptr=ptr->link;
    temp3=temp1->link;
    temp1->link=temp2->link;
    next=temp2->link->link;
    temp2->link->link=temp3->link;
    temp2->link=temp3;
    temp3->link=next;

}}

void display()
{
node *ptr;
ptr=start;
while(ptr!=NULL)
{
cout<<ptr->value<<endl<<" ";
ptr=ptr->link;
}
}

int main()
{
    create();
    swaping();
    display();

}
