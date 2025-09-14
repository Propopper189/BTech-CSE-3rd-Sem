#include <stdio.h>

void print(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
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
            // When i < j, swap a[i] with a[j]
            swap(&a[i], &a[j]);
        }
    } while(i < j);
    // When i is not less than j, swap a[low] with a[j]
    // and bring the pivot element at its correct place,
    // then return the index of the pivot.
    swap(&a[low], &a[j]);
    return j;
}
void quickSort(int *a, int low, int high, int size)
{
    if(low < high)
    {
        // Index of pivot after partition.
        int partitionIndex = partition(a, low, high);
        print(a, size);
        // Sort Left SubArray
        quickSort(a, low, partitionIndex - 1, size);
        // Sort Right SubArray
        quickSort(a, partitionIndex + 1, high, size);
    }
}
int main (){
    int a[] = {3, 2, 1, 0};
    int size = sizeof(a)/sizeof(int);
    printf("Printing Array Before Sorting : ");
    print(a, size);
    quickSort(a, 0, size - 1, size);
    printf("Printing Array After Sorting : ");
    print(a, size);
    return 0;
}

// 3 (pivot), 2i, 1, 0j --> patition starts here.
// 3, 2, 1, 0i|j
// 0, 2, 1, 3 (pivot) --> first pass complete. (return index = 3)

// 0 (pivot), 2i, 1j
// 0j, 2i, 1
// 0, 2, 1 -->second pass complete. (return index = 0)

// 2 (pivot), 1i|j
// 1, 2 -->third pass complete. (return index = 2)

// 0, 1, 2, 3 --> Sorted array.