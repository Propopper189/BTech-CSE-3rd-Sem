#include <iostream>
using namespace std;

int check(int *arr)
{
    if(arr[0] == 1 && arr[1] == 1)
    {
        return 1;
    }
    else if(arr[0] == 1 && arr[2] == 1)
    {
        return 1;
    }
    else if(arr[1] == 1 && arr[2] == 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[3];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        if(arr[0] + arr[1] + arr[2] >= 2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}