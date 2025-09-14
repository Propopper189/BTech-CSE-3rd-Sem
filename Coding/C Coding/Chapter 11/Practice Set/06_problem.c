/*
Attempt problem 4 using calloc().
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int*) calloc(5, sizeof(int));
    for(int i = 0; i<5; i++)
    {
        a[i] = i+1;
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("After Realloc : ");
    a = (int*) realloc(a, 10*sizeof(int));
    // realloc doesn't mean that the old values stored
    // in the array is freed.
    for(int i = 0; i<10; i++)
    {
        a[i] = i + 1;
        printf("%d ", a[i]);
    }
    return 0;
}