#include <iostream>
using namespace std;

void linearSearch(int *arr, int n, int key)
{
    int yes = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            yes = 1;
            break;
        }
    }
    if(yes == 1)
    {
        cout<<"Present\n";
    }
    else
    {
        cout<<"Not Present\n";
    }
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
    linearSearch(arr, n, key);
    return 0;
}