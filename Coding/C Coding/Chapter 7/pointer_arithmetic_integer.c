// POINTER ARITHMETIC USING INTEGER POINTER.

#include <stdio.h>
    
int main (){
    int a = 72;
    int* ptr = &a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %u\n",ptr);
    ptr++; // ptr = ptr + 1; (which moves the pointer by the size of an integer,
    // typically 4 bytes)
    printf("The value of ptr is %u\n",ptr);
    return 0;
}