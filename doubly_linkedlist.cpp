#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
void insertNode(node **head, node **last)
{
    int value;
    cout<<"Enter value to be inserted\n";
    cin>>value;
    node *newNode = new node;
    newNode->value = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    int i;
    if(*head == NULL)
    {
        cout<<"As list is empty, So element is inserted in the beginning\n";
        *head = newNode;
        *last = newNode;
        return;
    }
    cout<<"1.Insert at beginning\n2.Insert at end\n3.Insert after a value\n4.Insert before a value\n5.Insert at a specific position\n";
    cin>>i;
    int searchValue;
    node *temp;
    switch(i)
    {
    case 1:
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
        return;
    case 2:
        (*last)->next = newNode;
        newNode->prev = *last;
        *last = newNode;
        return;
    case 3:
        cout<<"Enter value after which to be inserted\n";
        cin>>searchValue;
        temp = *head;
        while(temp!=NULL && temp->value != searchValue)
        {
            cout<<temp->value;
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Value Not Found!!\n";
            return;
        }
        if(temp->next != NULL)
        {
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
        else
        {
            (*last)->next = newNode;
            newNode->prev = *last;
            *last = newNode;
            return;
        }
    case 4:
        cout<<"Enter value before which to be inserted\n";
        cin>>searchValue;
        temp = *head;
        while(temp != NULL  && temp->value != searchValue)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"Value Not Found!!\n";
            return;
        }
        if(temp->prev != NULL)
        {
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev->next = newNode;
            temp->prev = newNode;
        }
        else
        {
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
            return;
        }
    case 5:
        int counter=0,pos;
        temp = *head;
        cout<<"Enter position on which data is to be entered\n";
        cin>>pos;
        if(pos==1)
        {
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
            return;
        }
        while(temp!=NULL && counter != pos-1)
        {
            temp = temp->next;
            counter++;
        }
        if(temp == NULL)
        {
            cout<<"Entered position is not valid!!\n";
            return;
        }
        else
        {
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
    }
}
void display(node *head)
{
    node *temp = head;
    cout<<"\ndisplay\n";
    while(temp!=NULL)
    {
        cout<<temp->value<<"\n";
        temp=temp->next;
    }
    cout<<"\n";

}
void deleteNode(node **head, node **last)
{
    node *temp;
    if(*head == NULL)
    {
        cout<<"No element is deleted as list is empty.\n";
        return;
    }
    int i,searchValue;
    cout<<"1.Delete from beginning\n2.Delete from end\n3.Delete after a value\n4.Delete before a value\n5.Delete at a specific position\n";
    cin>>i;
    temp = *head;
    switch(i)
    {
    case 1:
        *head = (*head)->next;
        delete temp;
        return;
    case 2:
        temp = *last;
        *last = (*last)->prev;
        (*last)->next = NULL;
        delete temp;
        return;
    case 3:
        temp = *head;
        cout<<"Enter value after which element is to be deleted\n";
        cin>>searchValue;
        while(temp != NULL)
        {
            if(temp->value != searchValue)
                temp = temp->next;
            else
                break;
        }
        if(temp == NULL && temp->next == NULL)
        {
            cout<<"Element is not found!!\n";
            return;
        }
        if(temp->next->next != NULL)
        {
            temp->next = temp->next->next;
            temp->next->next->prev = temp;
            return;
        }
        else
        {
            temp->next = NULL;
            return;
        }
    case 4:
        temp = *head;
        cout<<"Enter value after which element is to be deleted\n";
        cin>>searchValue;
        while(temp != NULL)
        {
            if(temp->value != searchValue)
                temp = temp->next;
            else
                break;
        }
        if(temp == NULL || temp->prev != NULL)
        {
            cout<<"Element is not found!!\n";
            return;
        }
        temp->prev = temp->prev->prev;
        temp = temp->prev;
        temp->next = temp->next->next;
        return;
    case 5:
        int counter=0,pos;
        temp = *head;
        cout<<"Enter position on which data is to be entered\n";
        cin>>pos;
        if(pos==1)
        {
            *head = (*head)->next;
            delete temp;
            return;
        }
        while(counter != pos-2 && temp != NULL)
        {
            temp = temp->next;
            counter++;
        }
        if(temp == NULL)
        {
            cout<<"Entered position is not valid!!\n";
            return;
        }
        if(temp->next->next != NULL)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp->next = NULL;
        }
        return;

    }
}
int main()
{
    node *head = NULL;
    node *last = NULL;
    int c;
    while(1)
    {
        cout<<"1.Insert a Node\n2.Delete a Node\n3.Display the list\n";
        cin>>c;
        switch(c)
        {
        case 1:
            insertNode(&head,&last);
            break;
        case 2:
            deleteNode(&head,&last);
            break;
        case 3:
            display(head);
            break;
        }
        if(c>3)
            break;
    }
}

