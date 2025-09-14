/*
Write a program to create a dynamic array of 
5 floats using malloc()
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    float n = 5;
    float *ptr;
    ptr = (float*) malloc(n*sizeof(float));
    // basically ptr is the name of the array.
    ptr[0] = 0.1212;
    ptr[1] = 1.1212;
    ptr[2] = 2.1212;
    ptr[3] = 3.1212;
    ptr[4] = 4.1212;
    for(int i = 0; i<5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }

    return 0;
}