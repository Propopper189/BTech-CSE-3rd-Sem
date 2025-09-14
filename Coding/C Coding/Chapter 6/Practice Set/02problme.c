/*
Write a program having a variable ‘i’. Print the address of ‘i’.
Pass this variable to a function and print its address. 
Are these addresses same? Why?
*/

/*
YES, the address is going to be the same as we
are sending the pointer variable (address) to the function
*/

// Program starts here.

#include <stdio.h>
void fn(int*);
void fn(int* a){
    printf("The value of ptr is %p\n", a);
    printf("The value at ptr is %d\n", *a);
}
int main (){
    int i = 7;
    int* ptr = &i;
    printf("The address of i is %p\n", ptr);
    fn(ptr);
    return 0;
}