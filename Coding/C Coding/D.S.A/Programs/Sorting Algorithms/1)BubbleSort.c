#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}
void printArray(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubbleSort(int *a, int size)
{
    int sortedArray = 0;
    for(int i = 0; i < size-1; i++) // For number of passes (i < size-1) bcz i starts from 0;
    {
        printf("Working On Pass Number : %d\n", i + 1);
        sortedArray = 1;
        for(int j = 0; j < size - 1 - i; j++) // For number of comparsions.
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                sortedArray = 0;
            }
        }
        if(sortedArray == 1 && i == 0)
        {
            printf("Array Is Already Sorted\n");
            return;
        }
        else if(sortedArray)
        {
            return;
        }
    }
}
int main (){
    int a[] = {10, 15, 5};
    int size = sizeof(a)/sizeof(int);
    // printf("Printing Array Before Sorting : ");
    // printArray(a, size);
    bubbleSort(a, size);
    printf("Printing Array After Sorting : ");
    printArray(a, size);
    return 0;
}