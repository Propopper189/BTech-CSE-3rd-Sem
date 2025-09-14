/*
Write a program to calculate the factorial 
of a given number using a for loop.
*/

// Program starts here 

#include <stdio.h>
int main (){
    int factorial=1;
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        factorial = factorial*i;
    }
    printf("Factorial of %d is %d",n, factorial);
    return 0;
}