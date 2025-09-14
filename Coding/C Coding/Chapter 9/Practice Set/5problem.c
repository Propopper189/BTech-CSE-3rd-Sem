/*
Write a program with a structure 
representing a complex number.
*/

// Program Starts Here.

#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}complex;   
int main (){
    complex c1, *ptr;
    ptr = &c1;
    ptr->real = 12;
    ptr->imaginary = 3;
    printf("%d + %di", ptr->real, (*ptr).imaginary);
    return 0;
}