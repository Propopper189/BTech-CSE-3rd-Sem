/*
Write a function ‘sumVector’ which returns 
the sum of two vectors passed to it. The vectors 
must be two–dimensional.
*/

// Program Starts Here.

#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
}vector;
vector sumVector(vector v1, vector v2)
{
    vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
}   
int main (){
    vector v1, v2, v3;
    v1.i = 2;
    v2.i = 2;
    v1.j = 2;
    v2.j = 2;
    v3 = sumVector(v1,v2);
    printf("The sum of the vectors is %di + %dj", v3.i, v3.j);
    return 0;
}