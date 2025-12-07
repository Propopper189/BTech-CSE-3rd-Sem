#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverse(int *arr, int n)
{
    for(int i = 0, j = n-1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

void display(int *arr, int n)
{
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
    reverse(arr, n);
    display(arr, n);
    return 0;   
}