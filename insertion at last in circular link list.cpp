
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
       start->link=start;
   }
   else
   {
       temp->link=ptr;
   }
   temp=ptr;
   }
   ptr->link=start;
 }






void display()
{
node *ptr;
ptr=start;

cout<<ptr->value<<endl;
ptr=ptr->link;
while(ptr!=start)
{
cout<<ptr->value<<endl;
ptr=ptr->link;
}
}

void insertion()
{
node *ptr=new node;
node *newnode=new node;
newnode->value=55;
newnode->link=NULL;
if(start==NULL)
{
start=newnode;
start->link=start;
}
else
{
ptr=start;
ptr=ptr->link;
while(ptr->link!=start)
{
    ptr=ptr->link;
}
ptr->link=newnode;
newnode->link=start;

}
}

int main()
{
    create();
insertion();
display();
}
