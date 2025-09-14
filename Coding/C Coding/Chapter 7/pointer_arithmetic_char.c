// POINTER ARITHMETIC USING CHARACTER POINTER.

#include <stdio.h>
    
int main (){
    char a = 'A';
    char* ptr = &a;
    printf("The value of a is %c\n", a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}