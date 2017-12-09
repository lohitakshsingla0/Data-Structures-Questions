#include<iostream>
using namespace std;
class sort{
	int *arr;
	int n;
	public:
	sort(int x){
		n=x;
		arr=new int[x];
	}
	void insert(){
		for(int i=0;i<n;i++)
			cin>>arr[i];
	}
	void quickSort(int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(left, j);
      if (i < right)
            quickSort(i, right);
}
	void print(){
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
};
int main(){
	int x;
	cout<<"Enter no. of elements to be entered : "<<endl;
	cin>>x;
	cout<<"Enter elements"<<endl;
	sort s(x);
	s.insert();
	s.quickSort(0,x-1);
	cout<<"Sorted array is : "<<endl;
	s.print();
}

