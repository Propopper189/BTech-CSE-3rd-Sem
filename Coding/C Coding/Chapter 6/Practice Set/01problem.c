// Write a program to print the address of a variable. 
// Use this address to get the value of the variable.

// Program Starts Here

#include <stdio.h>
    
int main (){
    int a = 62;
    int* ptr = &a;
    int c = *ptr;
    printf("The address of a is %p\n", ptr);
    printf("The value at address b is %d\n", c);
    return 0;
}