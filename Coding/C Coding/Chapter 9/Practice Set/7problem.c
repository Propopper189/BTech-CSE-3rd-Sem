/*
Write problem 5’s structure using ‘typedef’ keywords.
*/

// Program Starts Here.

#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}complex;
int main (){
    complex c1;
    complex *ptr;
    ptr = &c1;
    ptr->real = 2;
    ptr->imaginary = 3;
    printf("%d + %di", ptr->real, ptr->imaginary);
    return 0;
}