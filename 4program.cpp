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

}
