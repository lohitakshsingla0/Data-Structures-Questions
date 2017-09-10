#include <iostream>

using namespace std;
struct node
  {
     char ch;
     struct node *next;
  };
struct node *start=NULL,*start1=NULL;
struct node* create(struct node *start)
{
    char c;
    cin>>c;
    while(c!='$')
    {
         struct node *ptr=new node;
        ptr->ch=c;
        ptr->next=NULL;
       if(start==NULL)
 {
   start=ptr;
 }
 else
 {
   struct node *temp = start;
     while(temp->next!=NULL)
     {
     temp = temp->next;
     }
   temp->next = ptr;
 }
        cin>>c;
    }
  return start;
}
