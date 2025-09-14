#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void print(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int maximum(int *a, int size)
{
    // initialize max with the minimum element
    int max = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int *a, int size)
{
    int i, j;
    // Find the maximum element in the array.
    int max = maximum(a, size);
    // Initialize the count array of (max + 1) size with all elements as zero.
    int *count = (int*) calloc((max + 1), sizeof(int));

    for(i = 0; i < size; i++)
    {
        // Increment the corresponding index in the count array.
        count[a[i]]++;
    }
    i = 0; // counter for count array.
    j = 0; // counter for given array.
    while (i <= max)
    {
        if(count[i] > 0)
        {
            a[j] = i;
            j++;
            count[i]--;
        }
        else
        {
            i++;
        }
    }
    
}
int main (){
    int a[] = {12, 10, 5, 6, 7, 9, 1, 2, 4, 3, 11, 8};
    int size = sizeof(a)/sizeof(int);
    countSort(a, size);
    print(a, size);
    return 0;
}