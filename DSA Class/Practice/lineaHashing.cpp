#include <iostream>
using namespace std;

void hash1(int *arr, int n, int data)
{
    int ind = data % n;
    int start = ind;
    while(arr[ind] != -1)
    {
        ind = (ind + 1) % n;
        if(start == ind)
        {
            cout<<"Hash table is full\n";
            return;
        }
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
        hash1(arr, n, data);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}