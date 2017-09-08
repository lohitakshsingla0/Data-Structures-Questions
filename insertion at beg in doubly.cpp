
#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    struct node *next;
    int value;
}*start=NULL,*last=NULL;
//typedef struct node node;
int length=0;
void display()
{
    if(start==NULL)
        cout<<"empty";
    else{
        node *ptr=last;
        while(ptr!=NULL)
        {
            cout<<ptr->value;
            ptr=ptr->prev;
        }
    }
}

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
       ptr->prev=NULL;
//cout<<"hello";
   }
   else
   {
       temp->next=ptr;
       ptr->prev=temp;
   }
   temp=ptr;

//cout<<"\n";

   }
ptr->next=NULL;

    last=ptr;

 }
int main()
{
    create();
    display();
}
