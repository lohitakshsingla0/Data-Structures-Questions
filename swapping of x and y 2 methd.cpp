#include<iostream>
using namespace std;
struct node
{
    struct node *link;
    int value;
}*start=NULL,*last=NULL;
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
 last=ptr;
 }
void display()
{
node *ptr;
ptr=start;
while(ptr!=NULL)
{
cout<<ptr->value;
ptr=ptr->link;
}
}

void swaping()
{
    node *temp1,*temp2,*val1,*val2;
    cout<<"enter the x and y values respectively";
    int x,y;
    cin>>x>>y;
    node *ptr;
    ptr=start;
    if(start->value==x&&last->value==y)
    {
        temp1=start;
        ptr=start;
        while(ptr->link!=last)
        {
        ptr=ptr->link;
        }
        temp2=ptr;
        last->link=start->link;
        temp2->link=start;
        start->link=NULL;
        start=last;


    }else
{


    while(ptr->link!=NULL)
    {
            if(ptr->link->value==x)
        {
        temp1=ptr;
        val1=ptr->link;
        ptr->link=ptr->link->link;
       // temp1->link=ptr;
        }

       else if(ptr->link->value==y)
        {
        temp2=ptr;
        val2=ptr->link;
        ptr->link=ptr->link->link;
        //temp2->link=ptr;
        }

        else
        ptr=ptr->link;
        //}
       // display();
    }
    val1->link=temp2->link;
        temp2->link=val1;
        val2->link=temp1->link;
        temp1->link=val2;



    }

    }


int main()
{
    create();
   // display();
    swaping();
    display();

}

