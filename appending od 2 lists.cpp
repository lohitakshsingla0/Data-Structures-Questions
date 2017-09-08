
#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    struct node *next;
    int value;
}*start1=NULL,*last1=NULL,*start2=NULL,*last2=NULL;
//typedef struct node node;
int length=0;
void swaping()
{
   last1->next=start2;
   start2->prev=last1;
}



void display()
{
    if(start1==NULL)
        cout<<"empty";
    else{
        node *ptr=start1;
        while(ptr!=NULL)
        {
            cout<<ptr->value;
            ptr=ptr->next;
        }
    }
}

void create1()
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
   length++;
   ptr=new node;
   ptr->value=n;
   if(start1==NULL)
   {
       start1=ptr;
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

    last1=ptr;

 }


void create2()
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
   length++;
   ptr=new node;
   ptr->value=n;
   if(start2==NULL)
   {
       start2=ptr;
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

    last2=ptr;

 }




int main()
{
cout<<"eenter the frst link list\n";
    create1();
cout<<"eenter the second link list\n";

    create2();

cout<<"swapping\n";
    swaping();
    display();
    cout<<"   \n\n\n\n "<<length;
}

