#include <stdio.h>
// malloc stands for memory allocation. 
// It takes number of bytes to be allocated as an
// input and returns a pointer of type void.
#include <stdlib.h>
    
int main (){
    int n; 
    printf("Please enter the size of the array : ");
    scanf("%d", &n);
    int *ptr = (int*) malloc(n*sizeof(int));
    // malloc returns a null pointer, so in order to 
    // get integer pointer, we use type casting (int*)
    // The expression returns a null pointer 
    // if the memory cannot be allocated. 
    // Default value is a garbage value.
    for(int i = 0; i<n; i++)
    {
        ptr[i] = i+1;
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}