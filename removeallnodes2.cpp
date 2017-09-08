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



 void delete_all_nodes()
 {
     node *ptr,*temp,*prev=NULL;
     temp=start;
     ptr=start;

    if(start->value%2==0)
     {
     temp=temp->link;
      start=temp;
     delete ptr;
 ptr=temp;
              // temp=temp->link;
     }

       do
       {
           if(temp->value%2==0)
           {
               ptr->link=temp->link;
               delete temp;
               temp=ptr->link;;
           }
           else
           {
               ptr=temp;
               temp=temp->link;
           }
       }while(temp->link!=NULL);


if(temp->value%2==0)
{
delete temp;
temp=ptr;
temp->link=NULL;
}


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



/*void create()
{
    node *ptr,*temp;
    temp = new node;
     int n;
  cout<<"enter the values";
  while(1)
  {
   cin>>n;
   if(n==-1)
   {
       break;
   }ft
   ptr=new node;
   ptr->value=n;
   if(start==NULL)
   {
       start=ptr;
       temp = start;
   }
   else
   {
       temp->link=ptr;
       temp = temp->link;
   }
   }
 }*/

int main()
{
    create();
delete_all_nodes();
display();
}
