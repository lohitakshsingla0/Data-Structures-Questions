#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node* insertion(node *n,int d)
{
    if(n==NULL)
    {
        node *temp = new node;
        temp->data = d;
        temp->left = NULL;
        temp->right = NULL;
        n = temp;
    }
    else if(d < n->data)
    {
        n->left = insertion(n->left,d);
    }
    else
    {
        n->right = insertion(n->right,d);
    }
    return n;
}
void display(node *n)
{
    if(n == NULL)
        return;
    cout<<n->data;
    display(n->left);
    display(n->right);
}
int main()
{
    struct node *root = NULL;
    int ch=1;
    while(ch!=0)
    {
        cout<<"1.insert a node\n2.search a node\n3.Display the elements\n4.Enter 0 to quit\nEnter you choice...\n";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter the value to be inserted\n";
                    int d;
                    cin>>d;
                    root = insertion(root,d);
                    break;
            case 3: display(root);
                    break;

        }
    }
}

