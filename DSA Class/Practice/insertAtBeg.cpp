/*
Write functions to:
Insert an element at
a) beginning
*/
#include <iostream>
using namespace std;

void insertAtBeg(int *arr, int &n, int data)
{
    for(int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    n++;
}
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertAtBeg(arr, n, 1333);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}