
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
void insertpos()
{
    node *temp;
    node *ptr=start;
    int val,n,flag=0;
    if(start==NULL)
        cout<<"list is empty";
    else{
        cout<<"enter the value you want to insert";
        cin>>val;
        cout<<"enter the position where u want to insert";
        cin>>n;
        if(n>length)
        {
        cout<<"length of list of small..so cant insert the value";
        }
                  for(int i=0;i<(n-1);i++)
                    {
                        ptr=ptr->next;
                    }


                   node *ins=new node;
                    temp=ptr->prev;
                   ins->value=val;
                   ins->next=ptr;
                   ins->prev=temp;
                    ptr->prev=ins;
                    temp->next=ins;


            }
}



void display()
{
    if(start==NULL)
        cout<<"empty";
    else{
        node *ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->value;
            ptr=ptr->next;
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
   length++;
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
    insertpos();
    display();
    cout<<"   \n\n\n\n "<<length;
}
