#include <iostream>
using namespace std;

void quadraticProbing(int *arr, int n, int key)
{
    int ind = key % n;
    int start = ind;
    for(int i = 1; i < n && arr[ind] != -1; i++)
    {
        ind = ((key % n) + i * i) % n;
    }
    if(arr[ind] != -1)
    {
        cout<<"Hash table is full / no space for this key\n";
        return;
    }
    arr[ind] = key;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        quadraticProbing(arr, n, data);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}