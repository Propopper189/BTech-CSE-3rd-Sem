#include <iostream>
using namespace std;

void deleteIndex(int *arr, int ind, int &n)
{   
    if(ind >= n || ind < 0)
    {
        cout<<"Invalid Position\n";
        return;
    }
    for(int i = ind; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
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
    int ind;
    cin>>ind;
    deleteIndex(arr, ind, n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}