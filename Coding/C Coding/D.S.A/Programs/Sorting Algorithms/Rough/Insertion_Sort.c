#include <stdio.h>
void print(int *a, int size)
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
        j = i-1;
        key = a[i];
        while(j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main (){
    int a[] = {10, 5, 20, 15, 30, 25};
    int size = sizeof(a)/sizeof(int);
    insertionSort(a, size);
    print(a, size);
    return 0;
}