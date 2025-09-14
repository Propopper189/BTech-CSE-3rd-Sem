// Write a program to check whether a number is divisible by 97 or not

// Program starts here 

int a;
#include <stdio.h>
int main (){
    
    printf("Please enter your number : ");
    scanf("%d", &a);
    printf("The input value is : %d", a);
    int b = a%97;
    printf("\n\"a\" mod 97 is %d", a%97);
    return 0;

    //If a mod 97 is 0, then a is divisible by 97.
}