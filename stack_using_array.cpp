#include<iostream>
#include<stdlib.h>
#define MAX 1000
int top=-1;
using namespace std;
void push(int *a)
{
    if(top == MAX)
        return;
    top++;
    cout<<"Enter the value to be inserted\n";
    int value;
    cin>>value;
    a[top] = value;
}
void pop(int *a)
{
    top--;
}
void display(int *a)
{
    cout<<"\n"<<a[top]<<"\n";
}
int main()
{
    int top = -1;
    int a[MAX];
    int ch=1;
    while(1)
    {
        cout<<"1.Push a value\n2.Pop a value\n3.Display last Element\n4.To exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            push(a);
            break;
        case 2:
            pop(a);
            break;
        case 3:
            display(a);
            break;
        default:
            exit(0);
        }
    }
}



