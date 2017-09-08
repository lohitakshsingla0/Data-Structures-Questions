#include<iostream>
using namespace std;
struct insert
{
int info;
struct node *link;

}*start=NULL;
typedef struct node node1;
void insertsec()
{
    node *ptr=new node;
    ptr->info=5;
    ptr->link=NULL;



if(start==NULL)
{
    start=ptr;
}else{
ptr->link=start->link;
start->link=ptr;
}

}
}
