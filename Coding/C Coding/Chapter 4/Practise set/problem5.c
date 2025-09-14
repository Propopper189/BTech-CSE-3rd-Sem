/*
Write a program to sum first ten natural numbers using while loop.
*/

// Program starts here.

#include <stdio.h>
int main (){
    int i = 1;
    int sum = 0;
    while (i<=10){
        sum = sum + i;
        i = i + 1;
    }
    i = i - 1;
    printf("The sum of first %d natural numbers is : %d", i, sum);
    return 0;
}