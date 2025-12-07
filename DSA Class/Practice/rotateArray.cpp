#include <iostream>
using namespace std;

void reverse(int *arr, int left, int right)
{
    while(left < right)
    {
        swap(arr[left++], arr[right--]);
    }
}
void rotateArray(int *arr, int n, int k)
{
    k = k % n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
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
    rotateArray(arr, n, k);
    return 0;
}