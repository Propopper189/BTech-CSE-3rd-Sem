/*
Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
*/

// Program starts here

#include <stdio.h>
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    printf("First natural numbers till %d is : \n", n);
    for(int i = 1; i<=n; i++){ //the condition inside it should be true.
        printf("%d\n", i);
    }
    return 0;
}