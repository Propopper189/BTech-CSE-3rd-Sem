/*
Write a program to demonstrate the 
usage of free() with malloc().
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int n = 2;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 3;
    printf("%d\n", ptr[2]);
    free(ptr);
    printf("%d", ptr[2]);
    return 0;
}