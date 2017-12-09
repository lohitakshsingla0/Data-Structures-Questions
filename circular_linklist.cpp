#include<iostream>
using namespace std;
struct node
{
 int data;
 node *next;
}*Head;

class circlist
{
public:
   circlist()
   {
       Head=NULL;
   }
   //Insertion
   void insertAtBeg()
   {
       int val;
       cout<<"Enter the value"<<endl;
       cin>>val;
       node *temp;
       temp=new node;
       temp->data=val;
       temp->next=NULL;
       if(Head==NULL)
       {
           Head=temp;
           temp->next=Head;
           return;
       }
       node *ptr=Head;
       while(ptr->next!=Head)
       {
           ptr=ptr->next;
       }
       ptr->next=temp;
       temp->next=Head;
       Head=temp;
   }
   void insertAtEnd()
   {
       int val;
       cout<<"Enter the value"<<endl;
       cin>>val;
       node *temp;
       temp=new node;
       temp->data=val;
       temp->next=NULL;
       if(Head==NULL)
       {
           Head=temp;
           temp->next=Head;
           return;
       }
       node *ptr=Head;
       while(ptr->next!=Head)
       {
           ptr=ptr->next;
       }
       ptr->next=temp;
       temp->next=Head;
   }
   void insertAtPos()
   {
       int pos,val;
       cout<<"Enter the pos ";
       cin>>pos;
       cout<<"Enter the value ";
       cin>>val;
       node *temp;
       temp=new node;
       temp->data=val;
       temp->next=NULL;
       if(pos==1)
       {
           node *ptr=Head;
           while(ptr->next!=Head)
           {
               ptr=ptr->next;
           }
           ptr->next=temp;
           temp->next=Head;
           Head=temp;
           return;
       }
       node *ptr1=Head;
       int i;
       for(i=0;i<pos-2;i++)
       {
           ptr1=ptr1->next;
       }
       temp->next=ptr1->next;
       ptr1->next=temp;
   }
   //Deletion
   void deleteAtBeg()
   {
        node *temp;
        temp=Head;
        if(temp->next==Head)
        {
            Head=NULL;
        }
        else
        {

        while(temp->next!=Head)
        {
            temp=temp->next;
        }
        Head=Head->next;
        temp->next=Head;
   }
   }
   void deleteAtEnd()
   {
        node *temp;
        temp=Head;
        while(temp->next->next!=Head)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
   }
   void deleteAtPos()
   {
       int pos;
       cout<<"Enter the pos";
       cin>>pos;
       node *temp;
       temp=Head;
       if(pos==1)
       {
           while(temp->next!=Head)
               temp=temp->next;
           int v=Head->data;
           cout<<"deleted value:"<<v;
           Head=Head->next;
           temp->next=Head;
           delete temp;
           return;
       }
       node *t;
       int i;
       for(i=0;i<pos-2;i++)
       {
        temp=temp->next;
       }
       t=temp->next;
       temp->next=t->next;
       delete temp;

   }
   //searching
   void searchPos()
   {
       int val;
       int pos=0;
       cout<<"Enter the value to find";
       cin>>val;
       node *temp=Head;
       node *t=Head;
       temp=temp->next;
       while(temp->next!=Head)
       {
           pos++;
           if(temp->data==val)
           {
               break;

           }
           temp=temp->next;
       }
       t=t->next;
       if(t!=Head)
       {
           cout<<"Element found at :"<<pos;
       }
       else
           cout<<"Not found";

   }
   void display()
   {
       node *temp;
       temp=Head;
       cout<<temp->data<<" ";
       temp=temp->next;
       while(temp!=Head)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
   }
};
int main()
{
   int n;
   circlist l;
   while(1)
   {
   cout<<endl<<"1.InsertAtBeg\n2.InsertAtEnd\n3.InsertAtPos\n4.DeleteAtBeg\n5.DeleteAtEnd\n6.DeleteAtPos\n7.Searching value\n8.Display\n";
   cin>>n;
   switch(n)
   {
       case 1:l.insertAtBeg();
       break;
       case 2:l.insertAtEnd();
       break;
       case 3:l.insertAtPos();
       break;
       case 4:l.deleteAtBeg();
       break;
       case 5:l.deleteAtEnd();
       break;
       case 6:l.deleteAtPos();
       break;
       case 7:l.searchPos();
       break;
       case 8:l.display();
       break;
   }
   }
}

