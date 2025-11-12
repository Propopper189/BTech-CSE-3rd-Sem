#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[k-1];
    int count = 0;
    if(max == 0)
    {
        cout<<"0";
        return 0;
    }
    for(int i = k; i >= 0; i--)
    {
        if(max <= arr[i])
        {
            // max = arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}