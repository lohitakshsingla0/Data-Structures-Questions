#include<iostream>
using namespace std;
#define max 100
int f=-1;
int r=-1;
int array[max];

void ele_push(int a)
{
if(f==-1)
{
f++;
array[++r]=a;

}
else{
array[++r]=a;

}

}

void ele_pop()
{
if(r==f)
{
    r=f=-1;
}
else
{
f++;
}
}


void display()
{int i;
for(i=f;i<=r;i++)
{
cout<<array[i]<<"\n";
}


}

int main()
{
int i=0;
int a;
while(i==0)
{
cout<<"1.Enter 1 to push element\n"<<"2.Enter 2 to pop element\n"<<"display\n"<<"exit\n";
cin>>a;
switch(a)
{
case 1:
    cout<<"enter element to be pushed";
    cin>>a;
    ele_push(a);
    break;
case 2:
    ele_pop();
    break;
case 3:
    display();
    break;
case 4:
    i=1;
    break;
default :
    cout<<"invalid input";
}
}
}
