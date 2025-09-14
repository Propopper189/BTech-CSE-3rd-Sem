/*
Write a program to change the value of a variable to 
ten times of its current value.
*/

// Program starts here.

#include <stdio.h>
void change(int*);
void change(int* a){
    *a = *a*10;
}
int main (){
    int x = 10;
    printf("The value of x is %d\n", x);
    change(&x);
    printf("The value of x is %d\n", x);
    return 0;
}