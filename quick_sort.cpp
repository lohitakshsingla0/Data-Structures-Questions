#include<iostream>
using namespace std;
void quicksort(int *arr, int low, int high)
{
    int pivot, i, j, temp;
    if(low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while(i < j)
        {
            while(arr[i] <= arr[pivot] && i <= high)
                i++;
            while(arr[j] > arr[pivot] && j >= low)
                j--;
            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr, low, j-1);
        quicksort(arr, j+1, high);
    }
}


int main()
{
    int arr[20], n, i;
   cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements to be sorted\n";
    for(i = 0; i < n; i++)
        cin>>arr[i];
    quicksort(arr, 0, n-1);
    cout<<"Sorted array\n";
    for(i = 0; i < n; i++)
     cout<<arr[i];
    return 0;
}

