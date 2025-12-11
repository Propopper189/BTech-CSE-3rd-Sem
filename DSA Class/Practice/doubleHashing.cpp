#include <iostream>
using namespace std;

void doubleHashing(int *arr, int n, int data)
{
    int ind = data % n;
    int start = ind;
    for(int i = 1; arr[ind] != -1 && i < n; i++)
    {
        ind = (((data % n) + i * (7-data%7))) % n;
    }   
    if(arr[ind] != -1)
    {
        cout<<"There is no space for this data\n";
        return;
    }
    arr[ind] = data;
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        doubleHashing(arr, n, data);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;   
}