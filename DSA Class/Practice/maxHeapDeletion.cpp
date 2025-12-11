#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int deleteMaxHeap(int *arr, int &n)
{
    int root = arr[0];
    arr[0] = arr[n-1];
    n--;
    heapify(arr, n, 0);
    return root;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = (n/2) -1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout<<"Before Deletion : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Deleted element : "<<deleteMaxHeap(arr, n)<<endl;
    cout<<"After Deletion : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}