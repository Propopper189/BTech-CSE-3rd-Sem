/*
Create an array of multiplication table of 7 upto 10 
(7 x 10 = 70). Use realloc to make it store 15 number 
(from 7 x 1 to 7 x 15).
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int *table = (int*) calloc(10, sizeof(int));
    if(table == NULL)
    {
        printf("Memory Allocation Failed..!\n");
    }
    else if(table != NULL)
    {
        printf("Memory Allocation Successful..!\n");
    }
    for(int i = 0; i<10; i++)
    {
        table[i] = 7*(i+1);
        printf("7 X %d = %d\n", i+1, table[i]);
    }
    table = (int*) realloc(table, 15 * sizeof(int));
    if(table == NULL)
    {
        printf("Memory Allocation Failed..!\n");
    }
    else if(table != NULL)
    {
        printf("Memory Re_allocation Successful..!\n");
    }

    printf("After Realloc : \n");
    
    for(int i = 0; i<15; i++)
    {
        table[i] = 7*(i+1);
        printf("7 X %d = %d\n", i+1, table[i]);
    }
    free(table);
    return 0;
}