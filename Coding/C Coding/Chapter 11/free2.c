#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int *ptr = (int*) malloc(5*sizeof(int));
    for(int i =0; i<5; i++)
    {
        ptr[i] = i+1;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr = (int*) calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i+1;
        printf("%d ", ptr[i]);
    }
    
    return 0;
}