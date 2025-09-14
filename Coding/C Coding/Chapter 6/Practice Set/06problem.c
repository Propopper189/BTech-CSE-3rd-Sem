/*
Write a program to print the value of a variable i 
by using “pointer to pointer” type of variable.
*/

// Program starts here.

#include <stdio.h>
    
int main (){
    int i = 72;
    int* ptr = &i;
    int** ptr1 = &ptr;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr);
    printf("The value of i is %d\n", **(ptr1));
    return 0;
}