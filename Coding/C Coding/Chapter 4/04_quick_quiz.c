/*
Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.
*/

// Program starts here 

#include <stdio.h>
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    printf("Natural numbers in reverse order from %d are : \n", n);
    for (int i = n; i >= 1; i = i - 1){
        printf("%d\n", i);
    }
    return 0;
}