#include <iostream>
using namespace std;

void findDuplicates(int *arr, int n)
{
    bool yes = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                yes = true;
            }
        }
    }
    if(yes == true)
    {
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
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
    findDuplicates(arr, n);
    return 0;
}