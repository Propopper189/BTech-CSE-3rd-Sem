#include <iostream>
using namespace std;

int binSearch(int *arr, int key, int n)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high)/2;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == key)
        {
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
    int ind = binSearch(arr, key, n);
    if(ind == -1)
    {
        cout<<"Not found\n";
    }
    else
    {
        cout<<key<<" found at index "<<ind<<endl;
    }
    return 0;
}