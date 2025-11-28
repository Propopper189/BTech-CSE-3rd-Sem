#include <iostream>
using namespace std;


void heapify(int *arr, int n, int i)
{
    int min = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] < arr[min])
    {
        min = left;
    }
    if(right < n && arr[right] < arr[min])
    {
        min = right;
    }
    if(min != i)
    {
        swap(arr[i], arr[min]);
        heapify(arr, n, min);
    }
}


void display(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    for(int i = (n/2)-1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    display(arr, n);
    return 0;
}