/*
Create a two-dimensional vector using structures in C.
*/

// Program Starts Here.

#include <stdio.h>
struct vector
{
    int i;
    int j;
}; 
int main (){
    // struct vector v1;
    // v1.i = 12;
    // v1.j = 13;
    struct vector v1 = {12, 13};
    printf("The value of vector is %di & %dj", v1.i, v1.j);
    return 0;
}