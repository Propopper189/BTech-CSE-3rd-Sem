/*
Create an array of 10 numbers. 
Verify using pointer arithmetic that (ptr+2) points to the third 
element where ptr is a pointer pointing to the first element 
of the array.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    int a[10];
    for(int i = 0; i<10; i++){
        a[i] = i+1;
        // {1,2,3,4,5,6,7,8,9,10}
    }
    int* ptr = &a[0];
    ptr = ptr + 2;
    printf("The value at ptr+2 is %d\n", *ptr);
    // Hence third element. (3).
    
    return 0;
}