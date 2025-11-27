#include <iostream>
using namespace std;

int main()
{
    // cout<<10/0;
    // int arr[10000000000];
    // int *arr = new int[1000000000000000];
    // cout<<12;
    int a, b;                                              
    cin>>a>>b;
    try
    {
        if(b == 0)
        {
            throw "division by zero";
        }
        cout<<a/b<<endl;
    }
    catch(const char *c)
    {
        cout<<"Error: "<<c<<endl;
    }
    cout<<"Program executed!!"<<endl;
    return 0;
}