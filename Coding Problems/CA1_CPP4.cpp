#include <iostream>
using namespace std;

int main()
{
    char arr[2][7];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Display : "<<endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}