#include <iostream>
using namespace std;

template<typename name1, typename name2>

name2 max(name1 a, name2 b, name2 c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

template<typename name1, typename name2, typename name3>
int search(name1 arr, name2 b, name3 c)
{
    for(int i = 0; i < b; i++)
    {
        if(arr[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    // int a;
    // double b, c;
    // cin>>a>>b>>c;
    // cout<<max(a, b, c);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(search(arr, n, key))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}