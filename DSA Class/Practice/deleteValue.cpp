#include <iostream>
using namespace std;

void deleteValue(int *arr, int key, int &n)
{
    int yes = 0, ind = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            yes = 1;
            ind = i;
            break;
        }
    }    
    if(yes == 1)
    {
        for(int i = ind; i < n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else
    {
        cout<<"Failed\n";
    }
}

void display(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    deleteValue(arr, key, n);
    display(arr, n);
    return 0;
}