#include <stdio.h>
    
int main (){
    int i = 73;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer).
    int k = 64;
    printf("The address of i is %p\n", &i);
    // %p is a format specifier for pointer(Hexadecimal).
    // %u is a format speifier for pointer(Decimal).
    // Output i recieved is 0061FF1C, it's always random.
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);
    // value at address operator (*)
    printf("The value at address j is %d\n", *j);
    // Is same as -->
    printf("The value at address j is %d\n", *(&i));
    return 0;
}