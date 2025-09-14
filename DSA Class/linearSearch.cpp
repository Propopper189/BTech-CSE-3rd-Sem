#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
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
    int yes = linearSearch(arr, n, key);
    if(yes >= 0)
    {
        cout<<"Element Found At Index : "<<yes;
    }
    else
    {
        cout<<"Not Found!";
    }
    return 0;
}