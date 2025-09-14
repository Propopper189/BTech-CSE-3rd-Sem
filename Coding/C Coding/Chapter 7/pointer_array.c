#include <stdio.h>
    
int main() {
    int a[] = {1, 2, 3};  // Declare an integer array 'a' with elements 1, 2, and 3.
    int* ptr = a;         // Initialize 'ptr' to point to the first element of the array 'a'.

    // Print the address that 'ptr' is pointing to, which is the address of 'a[0]'.
    printf("%p\n", ptr);
    
    ptr++; // Increment 'ptr' to point to the next element of the array, 'a[1]'.
    
    // Print the value at the address that 'ptr' is now pointing to, which is the value of 'a[1]'.
    printf("%d", *ptr);
    
    return 0;
}
