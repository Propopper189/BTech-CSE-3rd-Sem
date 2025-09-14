// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// Program starts here

#include <stdio.h>
int sum(int);
int sum(int x){
    if(x==1){
        return 1;
    }
    return sum(x-1)+x;
}    
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    printf("The sum of first %d natural number is %d",n, sum(n));
    return 0;
}