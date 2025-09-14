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
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}
void insertionSort(int *a, int size)
{
    int j;
    for(int i = 1; i <= size-1; i++)
    {
        // Loop for number of passes
        j = i;
        while (j > 0 && a[j] < a[j-1])
        {
            swap(&a[j], &a[j - 1]);
            j--;
        }
        
    }
}
int main (){
    int a[] = {1, 3, 2, 4, 8, 7, 6, 9};
    int size = sizeof(a)/sizeof(int);
    insertionSort(a, size);
    print(a, size);
    return 0;
}