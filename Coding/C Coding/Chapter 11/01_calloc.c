/*
calloc stands for continuous allocation. 
It initializes each memory block with a default
value of 0.
*/

#include <stdio.h>
#include <stdlib.h>
int* insert_values(int*, int);
int* insert_values(int* a, int b)
{
    for(int i = 0; i<b; i++)
    {
        a[i] = 5*(i+1);
    }
    return a;
}
void display(int*, int);
void display(int* a, int b)
{
    for(int i = 0; i<b; i++)
    {
        printf("The value of a[%d] is %d\n", i, a[i]);
    }
}
int main (){
    int n;
    printf("Please declare the size of the array : ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed..!");
    }
    else if(ptr != NULL)
    {
        printf("Memory Allocation Successful..!\n");
    }
    // size of the array (ptr) is now "n"
    insert_values(ptr, n);
    display(ptr, n);
    return 0;
}