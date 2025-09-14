/*
Write a program using a function 
which calculates the sum and average 
of two numbers. Use pointers and print 
the values of sum and average in main().
*/

// Program starts here.

#include <stdio.h>
int* sum(int, int);
int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum of %d and %d is %d\n", a, b, s);
    return ptr;
}
float* average(int, int);
float* average(int x, int y){
    float avg = (x+y)/2.0;
    float* ptr = &avg;
    printf("The average of %d and %d is %d\n", x,y,avg);
    return ptr;
}
int main (){
    int d = 3, e = 4;
    int* ptr1 = sum(d,e);
    float* ptr2 = average(d,e);
    printf("The address of sum is %p\n", ptr1);
    printf("The address of average is %p\n", ptr2);
    return 0;
}