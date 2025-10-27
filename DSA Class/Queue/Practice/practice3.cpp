#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n <= 0)
    {
        cout<<"No prices to display\n";
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            c = 1;
            cout<<arr[i]<<" ";
        }
    }
    if(c == 0)
    {
        cout<<"No non-negative prices.\n";
    }
    return 0;
}