

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
void del()
{
   node *temp;
    node *ptr=start;
    int val,n,flag=0;
     if(start==NULL)
        cout<<"list is empty";
    else{

cout<<"enter the value you want to insert";
cin>>n;
            for(int i=0;i<(n-1);i++)
                    {
                        ptr=ptr->next;
                    }
            if(n==1)
            {
            start=ptr->next;
            start->prev=NULL;
            delete ptr;
            }else if(n==2){
                ptr=ptr->prev;
            node *del=new node;
             del=ptr->next;
             temp=del->next;
             delete del;
             ptr->next=temp;
             temp->prev=ptr;
            }
            else
            {


           //  l=ptr->next;
           node *del=new node;
           del=ptr->prev;
           temp=ptr->next;
           delete ptr;
           del->next=temp;
           temp->prev=del;

           }}
}




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
    del();
    display();
}
