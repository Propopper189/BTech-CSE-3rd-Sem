#include <iostream>
using namespace std;

void insertAtPos(int *arr, int pos, int key, int &n)
{   
    if(pos > n || pos < 0 || n >= 100)
    {
        cout<<"Failed Insertion\n";
        return;
    }
    n++;
    for(int i = n-1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
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
    int pos, key;
    cin>>pos>>key;
    insertAtPos(arr, pos, key, n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}