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
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int deleteMaxHeap(int *arr, int &n)
{
    if(n<=0)
    {
        return -1;
    }
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
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = (n/2)-1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout<<"Deleted element : "<<deleteMaxHeap(arr, n)<<endl;
    cout<<"Heap after deletion : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}