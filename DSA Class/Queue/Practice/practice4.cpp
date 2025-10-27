#include <iostream>
using namespace std;

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
    int y = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            y = 1;
            cout<<"Key is present at index "<<i<<endl;
            return 0;
        }
    }
    if(y == 0)
    {
        cout<<"Key not found\n";
    }
    return 0;
}