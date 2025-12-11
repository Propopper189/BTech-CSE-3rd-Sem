#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i)
{
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] < arr[small])
    {
        small = left;
    }
    if(right < n && arr[right] < arr[small])
    {
        small = right;
    }
    if(small != i)
    {
        swap(arr[i], arr[small]);
        heapify(arr, n, small);
    }
}

int deleteMinHeap(int *arr, int &n)
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
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = (n/2)-1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout<<"Deleted element : "<<deleteMinHeap(arr, n)<<endl;
    cout<<"After deletion : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}