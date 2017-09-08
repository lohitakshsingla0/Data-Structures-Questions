#include <iostream>
using namespace std;
int n,a[100];
void insertion()
{
    for(int i=1;i<n;i++)
    {
        int j;
        int temp=a[i];
        j=i-1;
        while(temp<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion();
}
