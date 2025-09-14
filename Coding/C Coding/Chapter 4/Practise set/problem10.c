/*
Write a program to check whether a given number is prime 
or not using loops.
*/

// Program starts here.

#include <stdio.h>
int main (){
    int n, not_prime, mod;
    printf("Please enter your number : ");
    scanf("%d", &n);
    if (n==1){
        printf("%d is neither prime nor composite", n);
        return 0;
    }
    for(int i = 1; i < n; i++){
        if (i!=1){
            mod = n%i;
            if (mod == 0){
                not_prime = 1;
                break;
            }
            else {
                not_prime = 0;
            }
        }
    }
    if (not_prime==1){
        printf("%d is not prime", n);
    }
    else if (not_prime==0){
        printf("%d is prime", n);
    }
    else {
        printf("%d is prime", n);
    }
    return 0;
}