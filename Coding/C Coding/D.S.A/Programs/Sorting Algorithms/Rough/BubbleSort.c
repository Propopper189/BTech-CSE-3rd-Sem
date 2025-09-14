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
    for(int i = 0; i< size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubbleSort(int *a, int size)
{
    int sortedArray = 0;
    for(int i = 0; i< size-1; i++)
    {
        sortedArray = 1;
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                sortedArray = 0;
            }
        }
        if(sortedArray == 1)
        {
            break;
        }
    }
}
int main (){
    int a[] = {12, 23, 1, 232, 332,1};
    int size = sizeof(a)/sizeof(int);
    bubbleSort(a, size);
    printArray(a, size);
    return 0;
}