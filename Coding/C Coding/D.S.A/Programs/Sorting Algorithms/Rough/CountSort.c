#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
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
    
    int max = maximum(a, size);
    int *count = (int*) calloc((max + 1), sizeof(int));
    for(i = 0; i < size; i++)
    {
        count[a[i]]++;
    }
    i = 0; // counter for count array.
    j = 0; // counter for given array
    while(i <= max)
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
    int a[] = {1, 3, 2, 6, 4, 5, 7};
    int size = sizeof(a)/sizeof(int);
    countSort(a, size);
    print(a, size);
    return 0;
}