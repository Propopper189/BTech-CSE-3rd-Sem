/*
Repeat 8 using while loop
*/

// Program starts here.

#include <stdio.h>
int main (){
    printf("Using while loop\n");
    int factorial = 1;
    int n;
    int i = 1;
    printf("Please enter your number : ");
    scanf("%d", &n);
    while(i<=n){
        factorial *= i; //Same as factorial = factorial*i;
        i = i + 1;
    }
    printf("Factorial of %d is %d",n, factorial);
    return 0;
}