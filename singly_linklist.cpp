#include<iostream>
using namespace std;
struct node{
    int value;
    struct node *next;
};

node* insertNode(node *head){
    cout<<"Enter value to be inserted \n";
    int value;
    cin>>value;
    node *insertNode = new node;
    insertNode->value = value;
    insertNode->next = NULL;
    if(head == NULL){
        cout<<"As List is empty so elent is inserted in beginning.\n";
        return insertNode;
    }
    cout<<"Select where to be inserted\n 1.Beginning of list.\n 2.Specific Position.\n 3.Insert at the End...\n ";
    int select;
    cin>>select;
    switch(select)
    {
    case 1:
        insertNode->next = head;
        return insertNode;
    case 2:
        int pos,counter;
        counter=0;
        cout<<"Enter position..\n ";
        cin>>pos;
        if(pos == 1){
            insertNode->next = head;
            return insertNode;
        }
        node *temp1;
        temp1 = head;
        while(temp1 != NULL && counter != (pos-1)){
            temp1 = temp1->next;
            counter++;
        }
        if(temp1 == NULL){
            cout<<"position not found\n";
            return head;
        }
        insertNode->next = temp1->next;
        temp1->next = insertNode;
        return head;

    case 3:
        node *temp ;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = insertNode;
        return head;
    }
}
void displayNode(node *head)
{
    cout<<"display\n";
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<"\n";
}
node* deleteNode(node *head)
{
    if(head == NULL){
        cout<<"List is empty\n";
        return head;
    }
    node *temp = head;
    node *temp1 = head->next;
    cout<<"1.Delete from beginning\n2.Delete from a specific position\n3.Delete a particular value\n";
    int select;
    cin >>select;
    switch(select)
    {
    case 1:
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        delete temp;
        return temp1;
    case 2:
        int pos,counter;
        counter=0;
        cout<<"Enter position..\n ";
        cin>>pos;
        if(pos == 1){
            delete temp;
            return temp1;
        }
        while(temp->next != NULL && counter != (pos-2)){
            temp = temp->next;
            temp1 = temp1->next;
            counter++;
        }
        if(temp1 == NULL){
            cout<<"position not found\n";
            return head;
        }
        temp->next = temp1->next;
        delete temp1;
        return head;
    case 3:
        cout<<"Insert value to be deleted\n";
        int data;
        cin>>data;
        if(temp->value == data){
            delete temp;
            return temp1;
        }
        while(temp1->value != data && temp1 != NULL){
            temp = temp->next;
            temp1 = temp1->next;
        }
        if(temp1 == NULL){
            cout<<"No matching data found";
            return head;
        }
        if(temp1->next == NULL){
            delete temp1;
            temp->next = NULL;
            return head;
        }
        temp->next = temp1->next;
        delete temp1;
        return head;
    }

}
int main()
{
    node *head = NULL;
    int c = 1;
    while(c<=3){
        cout<<"1.Enter new node\n2.Delete a node\n3.Display\n";
        cin>>c;
        switch(c)
        {
        case 1:
            head = insertNode(head);
            break;
        case 2:
            head = deleteNode(head);
            break;
        case 3:
            displayNode(head);
            break;
        }
    }
}

