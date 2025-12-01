#include <iostream>
using namespace std;

void reverse(int *arr, int left, int right)
{
    while(left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
void shift(int *arr, int k, int n)
{
    // reverse whole array
    reverse(arr, 0, n-1);
    // reverse first k elements
    reverse(arr, 0, k-1);
    // reverse remaining (n-k) elements
    reverse(arr, k, n-1);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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
    int k;
    cin>>k;
    shift(arr, k, n);
    return 0;
}