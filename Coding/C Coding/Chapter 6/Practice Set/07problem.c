/*
Try problem 3 using call by value and verify 
that it does not change the value of the said variable.
*/

// Program starts here.

#include <stdio.h>
int change(int);
int change(int x){
    x = x*10;
    printf("The value of x is %d\n", x);
    return x;
} 
int main (){
    int a = 10;
    change(a);
    printf("The value of a is %d\n", a);
    // Did not change the value of a.
    return 0;
}