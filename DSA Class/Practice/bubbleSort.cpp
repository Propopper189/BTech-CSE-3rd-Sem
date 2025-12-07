#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n, int &s)
{
    for(int i = 0; i < n; i++)
    {
        int done = 1;
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                s++;
                done = 0;
            }
        }
        if(done == 1)
        {
            break;
        }
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
    int s = 0;
    bubbleSort(arr, n, s);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl<<"Number of swaps: "<<s<<endl;
    return 0;
}