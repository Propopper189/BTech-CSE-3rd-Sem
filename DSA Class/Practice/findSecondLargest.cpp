#include <iostream>
#include <climits>
using namespace std;

void secondLargest(int *arr, int n)
{
    if(n < 2)
    {
        cout<<"No second largest\n";
        return;
    }
    int l = INT_MIN;
    int sl = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i] != l)
        {
            sl = arr[i];
        }
    }
    if(sl == INT_MIN)
    {
        cout<<"No second largest\n";
        return;
    }
    cout<<"Largest : "<<l<<endl;
    cout<<"Second largest : "<<sl<<endl;
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
    secondLargest(arr, n);
    return 0;   
}