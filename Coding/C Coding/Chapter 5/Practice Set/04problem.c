// Write a program using recursion to calculate
// nth element of Fibonacci series

// Program starts here

#include <stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}    
int main (){
    int a; 
    printf("Please enter your number : ");
    scanf("%d", &a);
    printf("The %dth element of fibonacci series is %d", a, fibonacci(a));
    return 0;
}