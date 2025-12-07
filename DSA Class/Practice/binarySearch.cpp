#include <iostream>
using namespace std;

void binarySearch(int *arr, int n, int key)
{
    int left = 0; 
    int right = n-1;
    while(left <= right)
    {
        int mid = (left + right)/2; // int mid = left + (right - left) / 2;
        if(arr[mid] == key)
        {
            cout<<"Present\n";
            return;
        }
        else if(key < arr[mid])
        {
            right = mid -1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout<<"Not present\n";
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
    binarySearch(arr, n, key);
    return 0;
}