#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    // Incomplete
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
    insertionSort(arr, n);
    return 0;   
}