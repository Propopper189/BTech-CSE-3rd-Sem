/*
Write a program to dynamically create an array of 
size 6 capable of storing 6 integers.
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int *a = (int*) malloc(6 * sizeof(int));
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;
    for(int i = 0; i<6;i++)
    {
        if(i==5)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}