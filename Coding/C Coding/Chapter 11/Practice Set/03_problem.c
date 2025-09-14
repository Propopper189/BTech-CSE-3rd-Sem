/*
Solve problem 1 using calloc().
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int *a = (int*) calloc(6, sizeof(int));
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;
    for(int i = 0; i<6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}