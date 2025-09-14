// Write a function and pass the value by reference.

// Program starts here.

#include <stdio.h>
void ref(int*);
void ref(int* a){
    *a = *a + 10;
}
int main (){
    int x = 10;
    printf("The value of x is %d\n", x);
    ref(&x);
    printf("The value of x is %d\n",x);
    return 0;
}