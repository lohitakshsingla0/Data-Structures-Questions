#include<iostream>
using namespace std;
int main()
{
int i,j,a,b=1;
int n;
cin>>n;
for(i=n;i>0;i--)
{
    for(j=0;j<b;j++)
    {


if(i%2==0)
{
cout<<"1";
}
else
{
cout<<"0";
}

}
b++;
cout<<endl;
}
}
