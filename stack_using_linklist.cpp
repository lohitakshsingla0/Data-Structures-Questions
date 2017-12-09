#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node *next;
};
node* push(node *head)
{
    node *newNode = new node;
    cout<<"Enter the value to be inserted\n";
    int val;
    cin>>val;
    newNode->value = val;
    newNode->next = NULL;
    if(head == NULL)
        return newNode;
    newNode->next = head;
    head = newNode;
    return head;
}
node* pop(node *head)
{
    if(head == NULL)
        return NULL;
    head = head->next;
    return head;
}
void display(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<"\n";
        temp = temp->next;
    }

}
int main()
{
    node *head = NULL;
    int ch;
    while(1)
    {
        cout<<"1.Push a value\n2.Pop a value\n3.Display last Element\n4.To exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            head = push(head);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            display(head);
            break;
        default:
            exit(0);
        }
    }
}

