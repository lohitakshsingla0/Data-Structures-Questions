
#include<iostream>
using namespace std;
struct node
{
    struct node *link;
    int value;
}*start=NULL;
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
   if(n==0)
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
 }

void rev()
{
    node *ptr=start;
    node *temp;
    temp=new node;
    node *abc=temp;
    node *xyz;
    xyz=temp;
    int i ,j ,x,n;
    for(i=0;i<length;i++)
    {
     temp=new node;

    while(ptr!=NULL)
    {
    ptr=ptr->link;
    }
    temp->value=ptr->value;
    abc=new node:
    temp->link=abc;
    temp=abc;


    }


}
temp->link=NULL;
start=xyz;







 }
void display()
{
node *ptr;
ptr=start;
while(ptr!=NULL)
{
cout<<ptr->value<<endl;
ptr=ptr->link;
}


}



void main()
{
create();
rev();

}
