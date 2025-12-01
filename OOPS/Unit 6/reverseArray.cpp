#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    if(n >= 1)
    {
        swap(arr[0], arr[n-1]);
        reverse(arr + 1, n-2);
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
    reverse(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;    
}