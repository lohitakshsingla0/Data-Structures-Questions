#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    int arr[20];
    int n,a,b,result;
    stack <int> p;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            p.push(arr[i]);
        }
        if(arr[i]=="*")
        {
            a=p.pop();
            b=p.pop();
            result=a*b;
            break;
        }
        else if(arr[i]=="/")
        {
            a=p.pop();
            b=p.pop();
            result=a/b;
            break;
        }
        else if(arr[i]=="+")
        {
            a=p.pop();
            b=p.pop();
            result=a+b;
            break;
        }
        else if(arr[i]=="-")
        {
            a=p.pop();
            b=p.pop();
            result=a-b;
            break;
        }
    }
    cout<<result;
}
