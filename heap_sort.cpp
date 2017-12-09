using namespace std;
#include <iostream>
#include <stdlib.h>
class heaptree
{
int par=0,n=0,n1;
int ptr=0;
int tree[100];
public:
void insertheap(int);
void tdelete();
void print();
};
void heaptree::insertheap(int item)
{
    n=n+1;
ptr=n;
while(ptr>1)
    {
int par;
par=ptr/2;
if(item<=tree[par])
        {
tree[ptr]=item;
return;
        }
tree[ptr]=tree[par];
ptr=par;
    }
tree[1]=item;
    n1=n;
}
void heaptree::tdelete()
{
while(n1>=0)
{
int item,last;
if(n==0)
    {
cout<<"Now tree is empty\n";
return;
    }
item=tree[1];
last=tree[n];
n--;
cout<<item<<endl;
if(n==0)
    {
cout<<"tree is empty\n";
return;
    }
int ptr1=1;
int left=2;
int right=3;
while(right<=n)
    {
if(last>=tree[left]&&last>=tree[right])
        {
tree[ptr1]=last;
return;
        }
if(tree[left]>=tree[right])
        {
tree[ptr1]=tree[left];
            ptr1=left;
        }
else
        {
tree[ptr1]=tree[right];
            ptr1=right;
        }
left=2*ptr1;
right=(2*ptr1)+1;
    }
if((left==n)&&(last<=tree[left]))
    {
tree[ptr1]=tree[left];
        ptr1=left;
    }
tree[ptr1]=last;
    }
}
void heaptree::print()
{
for(int i=1;i<=n;i++)
cout<<tree[i]<<endl;
}
main(){
int item,choice;
heaptree obj;
while(1){
cout<<"\nEnter choice\n";
cout<<"1.Insert a new element\n";
cout<<"2.Delete heaptree\n";
cout<<"3.Print the tree\n";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter node to be inserted\n";
cin>>item;
obj.insertheap(item);
break;
case 2:
obj.tdelete();
break;
case 3:
obj.print();
break;
default:
exit(0);
        }
    }
}

