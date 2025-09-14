#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    // a = 6;
    // sum function cannot change "x" using "a" because copy of x is
    // provided to sum in a.
    return a+b;
}
int main (){
    int a = 1, b = 3;
    printf("The sum of a and b is %d", sum(a,b));
    return 0;
}