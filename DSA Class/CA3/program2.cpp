// TWO SUM O(nLog(n))
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    cin>>sum;
    int i = 0, j = n-1;
    int yes = 0;
    while(i < j)
    {
        if(sum == arr[i] + arr[j])
        {
            yes = 1;
            break;
        }
        if(sum > arr[i] + arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if(yes == 0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}