#include  <iostream>
using namespace std;

int binsearch(int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high)/2;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(key == arr[mid])
        {
            cout<<"FOUND";
            return mid;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else if(key > arr[mid])
        {
            low = mid + 1;
        }
    }
    cout<<"NOT FOUND!";
    return -1;
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
    int key; 
    cin>>key;
    binsearch(arr, n, key);
    return 0;
}