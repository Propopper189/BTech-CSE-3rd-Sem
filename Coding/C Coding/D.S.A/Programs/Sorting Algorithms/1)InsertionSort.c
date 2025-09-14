#include <stdio.h>
void printArray(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void insertionSort(int *a, int size)
{
    int j, key;
    for(int i = 1; i <= size-1; i++)
    {
        // Loop for passes
        j = i-1; 
        key = a[i];
        while(j>=0 && a[j] > key)
        {
            // Loop for each pass
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main (){
    int a[] = {10, 5, 15, 25, 20};
    int size = sizeof(a)/sizeof(int);
    insertionSort(a, size);
    printArray(a, size);
    return 0;
}