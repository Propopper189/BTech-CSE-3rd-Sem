#include <stdio.h>
void print(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void swap(int *a, int  *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *a, int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = a[low];
    do
    {
        while(a[i] <= pivot)
        {
            i++;
        }
        while(a[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(&a[i], &a[j]);
        }
    } while(i < j);
    swap(&a[low], &a[j]);
    return j;
}
void quickSort(int *a, int low, int high)
{
    if(low < high)
    {
        int partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}
int main (){
    int a[] = {12, 13, 10, 7, 8, 11, 5, 6, 9, 1, 3, 2, 4, 100};
    int size = sizeof(a)/sizeof(int);
    quickSort(a, 0, size-1);
    print(a, size);
    return 0;
}