#include <iostream>
using namespace std;

int main()
{
    int arr[3][4]; //data_type identifier[external_array_size][internal_array_size];
    int arr1[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 10}};
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter Values For Arr : "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Arr : "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}