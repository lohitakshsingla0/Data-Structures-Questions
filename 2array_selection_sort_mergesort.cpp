#include<iostream>
using namespace std;
int i,j,min_,n,m,t=0;
void selection_sort(int *a)
{
    for(int i=0;i<n-1;i++)
    {
        min_=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min_]>a[j])
                min_=j;
        }
        t=a[min_];
        a[min_]=a[i];
        a[i]=t;
    }
}
void merge(int arr[],int l,int m,int r){
int n1,n2,i,j,k;
n1=m-l+1;
n2=r-m;
int L[n1],R[n2];
for( i=0;i<n1;i++)
{
            L[i]=arr[l+i];
}
for( j=0;j<n2;j++)
{
            R[j]=arr[m+j+1];
}
k=l;
 i=0;
 j=0;
while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
arr[k]=L[i];
i++;
}
else
{
arr[k]=R[j];
j++;
}
k++;
}
while(i<n1)
{
    arr[k]=L[i];
    i++;
    k++;
}
while(j<n2)
{
    arr[k]=R[j];
    j++;
    k++;
}
}
void print(int arr[],int start,int end)
{
    for(int i=0;i<=end;i++)
        cout<<arr[i]<<" ";
}
void divide(int arr[],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
    divide(arr,l,m);
    divide(arr,m+1,r);
    merge(arr,l,m,r);
}
}
int main()
{
int a[100],b[100];
    cout<<"enter n the number of elements"<<endl;
    cin>>n;
    int z=0;
    int c[1000];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a);
    for(int i=0;i<n;i++)
    {
        cout<<"->"<<a[i]<<endl;
    }
    cout<<"enter m the number of elements"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
selection_sort(b);
    for(int i=0;i<m;i++)
    {
        cout<<"->"<<b[i]<<endl;
    }
    for(int i=0;i<n+m;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[z]=a[i];
        z++;

    }
    for(int i=0;i<m;i++)
    {
        c[z]=b[i];
        z++;
    }
    cout<<"output after merging two arrays"<<endl;
     divide(c,0,z-1);
    print(c,0,z-1);
}

