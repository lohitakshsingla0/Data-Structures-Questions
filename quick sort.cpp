#include<iostream>
using namespace std;
int qsort(int arr[],int n,int beg,int end)
{
	int left=beg,right=end,loc=beg;
	while(1)
	{
		while(arr[loc]<=arr[right] && loc!=right)
			right=right-1;
		if(loc==right)
			return loc;
		else
		{
			int temp;
			temp=arr[right];
			arr[right]=arr[loc];
			arr[loc]=temp;
			loc=right;
		}
		while(arr[loc]>=arr[left] && loc!=left)
			left=left+1;
		if(loc==left)
			return loc;
		else
		{
			int temp;
			temp=arr[left];
			arr[left]=arr[loc];
			arr[loc]=temp;
			loc=left;
		}
	}
}
void quick(int arr[],int n)
{
	int us[10],ls[10],top=-1,beg,end;
	if(n>1)
	{
		top=top+1;
		ls[top]=0;
		us[top]=n-1;

	while(top!=-1)
	{
		beg=ls[top];
		end=us[top];
		top--;
		int loc=qsort(arr,n,beg,end);
		if(beg<loc-1)
		{
			top++;
			ls[top]=beg;
			us[top]=loc-1;
		}
		if(loc+1<end)
		{
			top=top+1;
			ls[top]=loc+1;
			us[top]=end;
		}

	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
else
{
	cout<<"list is already sorted";
}

}
int main()
{
	int arr[10],n;
	cout<<"enter the total no of elements in an array";
	cin>>n;
	cout<<"enter the elements in an array";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quick(arr,n);
}

