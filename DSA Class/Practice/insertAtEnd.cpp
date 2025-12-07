/*
Write functions to:

Insert an element at
a) end
*/

#include <iostream>
using namespace std;

void insertAtEnd(int *arr, int &n, int data)
{
    if(n >= 100)
    {
        cout<<"Array is Full\n";
        return;
    }
    arr[n++] = data;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int data;
    cin>>data;
    insertAtEnd(arr, n, data);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}