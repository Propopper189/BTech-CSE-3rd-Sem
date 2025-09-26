// C++ program for implementation of Insertion Sort
#include <iostream>
using namespace std;

/* Function to sort array using insertion sort */
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[], int n)
{
    int ind = 0;
    for(int i = 0; i < n; i++)
    {
        ind = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[ind])
            {
                ind = j;
            }
        }
        swap(arr[i], arr[ind]);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver method
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

/* This code is contributed by Hritik Shah. */