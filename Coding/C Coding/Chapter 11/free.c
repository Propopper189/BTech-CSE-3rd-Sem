#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int n = 2;
    // printf("Please declare the size of the array : ");
    // scanf("%d", &n);
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 2;
    ptr[1] = 3;
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    // this will free the memory;
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
        // this will print the garbage values.
    }
    return 0;
}