#include<iostream>
using namespace std;
class sort{
	int *arr;
	int n;
	public:
		sort(int x){
			arr=new int[x];
			n=x;
		}
		void insert(){
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
		void insort(){
			int i=0,j=0,key;
			for(i=1;i<n;i++){
				key=arr[i];
				j=i-1;
				while(j>=0&&key<arr[j]){
					arr[j+1]=arr[j];
					j=j-1;
				}
				arr[++j]=key;
			}
		}
		void nsort(int z)	{
			int i=n-1;
			n++;	
			while(arr[i]>z&&arr[i]>=0){
				arr[i+1]=arr[i];
				i--;
		}
			arr[++i]=z;
		}
		void print(){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}		
};
int main(){
	int n,i;
	cout<<"enter no of elements in array"<<endl;
	cin>>n;
	sort s(n);
	s.insert();
	s.insort();
	s.print();
	cin>>i;
	s.nsort(i);
	s.print();
}

