#include <iostream>
using namespace std;

// void heapify(int *arr, int n, int i)
// {
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     int largest = i;
//     if(left < n && arr[left] > arr[largest])
//     {
//         largest = left;
//     }
//     if(right < n && arr[right] > arr[largest])
//     {
//         largest = right;
//     }
//     if(largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
void heapifyUp(int *arr, int i)
{
    int parent = (i-1)/2;
    while(i > 0)
    {
        if(arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);
            i = parent;
        }
        else
        {
            break;
        }
    }
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
    for(int i = 0; i < n; i++)
    {
        heapifyUp(arr, i);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}