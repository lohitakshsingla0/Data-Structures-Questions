#include <iostream>
#include<cstdlib>
using namespace std;
class node{
public:
    int data;
    node *next;
};
class search_linklist{
    node *start;
public:
    search_linklist(){
        start=NULL;
    }
    void insertbeg(int value);
    void insertend(int value);
    void deletebeg();
    void deleteend();
    void search_(int);
    void traverse();
};
int main(){
    search_linklist obj;
    while(1){
        int n,value;
        cout<<"enter 1 for insert in beg, 2 for search , 3 for insertend , 4 for delete beg , 5 for deleteend , 6 for traverse an item"<<endl;
        cin>>n;
        switch(n){
        case 1:
            cin>>value;
            obj.insertbeg(value);
            break;
        case 2:
            cin>>value;
            obj.search_(value);
        case 3:
            cin>>value;
            obj.insertend(value);
            break;
        case 4:
            obj.deletebeg();
            break;
        case 5:
            obj.deleteend();
            break;
        case 6:
            obj.traverse();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
void search_linklist::insertbeg(int value){
    struct node *ptr,*temp;
    ptr=new struct node;
    if(start==NULL){
        ptr->data=value;
        start=ptr;
        ptr->next=start;
    }
    else{
        ptr->data=value;
        temp=start;
        while(temp->next!=start){
            temp=temp->next;
        }
        ptr->next=start;
        temp->next=ptr;
        start=ptr;
    }
}
void search_linklist::traverse(){
    struct node *temp;
    temp=start;
    if(start==NULL){
        cout<<"list is empty";
    }
    else{
        temp=start;
        while(temp->next!=start){
            cout<<temp->data;
            cout<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}
void search_linklist::insertend(int value){
    struct node *ptr,*temp;
    ptr=new node;
    if(start==NULL){
        ptr->data=value;
        start=ptr;
        ptr->next=start;
    }
    else{
        ptr->data=value;
        temp=start;
        while(temp->next!=start){
           temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=start;
    }
}
void search_linklist::deletebeg(){
    struct node *temp,*temp1;
    temp=start;
    if(start==NULL){
        cout<<"underflow";
    }
    else if(temp->next==start){
        start=NULL;
        delete temp;
    }
    else{
        temp1=start;
        while(temp->next!=start){
            temp=temp->next;
        }
        start=start->next;
        temp->next=start;
        delete temp1;
    }
}
void search_linklist::deleteend(){
    struct node *temp,*temp1;
    temp=start;
    if(start==NULL){
        cout<<"underflow";
    }
    else if(temp->next==start){
        start=NULL;
        delete temp;
    }
    else{
        temp1=start;
        while(temp->next!=start){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=start;
        delete temp;
    }
}
void search_linklist::search_(int item){
    node *temp;
    int flag=0;
    if(temp==NULL){
        cout<<"linklist is empty"<<endl;
    }
else{
        temp=start;
        while(temp->next!=NULL){
            if(temp->data==item){
                flag=1;
                break;
            }
            else
                temp=temp->next;
        }
        cout<<temp->data<<"has been";
    }
    if(flag==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}

