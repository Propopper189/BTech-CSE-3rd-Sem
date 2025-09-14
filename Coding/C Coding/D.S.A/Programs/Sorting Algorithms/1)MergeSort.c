#include <stdio.h>
#include <stdlib.h>
void print(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void merge(int *a, int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int *b = (int*) malloc((high + 1) * sizeof(int));
    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for(i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int *a, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main (){
    int a[] = {10, 9, 8, 6, 5, 7, 4, 2, 3, 1};
    int size = sizeof(a)/sizeof(int);
    printf("Before Sorting : ");
    print(a, size);
    mergeSort(a, 0, size - 1);
    printf("After Sorting : ");
    print(a, size);
    return 0;
}