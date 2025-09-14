/*
Sometimes the dynamically allocated memory is insufficient 
or more than required. realloc is used to allocate memory of 
new size using the previous pointer and size.
*/

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int n = 5;
    int *ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 12;
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    // ptr = (int*) realloc (ptr, newsize);
    // now, the size of the array "ptr" is 10;
    printf("%d\n", ptr[0]);
    free(ptr);
    printf("%d", ptr[0]);
    return 0;
}