#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *arr, int size)
{
    int done = 0;
    for(int i = 0; i < size; i++)
    {
        done = 1;
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                done = 0;
            }
        }
        if(done)
        {
            cout<<"DONE : ";
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
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}