/*
Quick Quiz: Write a program 
to print first ‘n’ natural number 
using do-while loop.
*/

// Program starts here

#include <stdio.h>
int main (){
    int i = 1;
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    printf("The first natural numbers of %d are : \n",n);
    do{
        printf("%d\n", i);
        i++;
    } while (i<=n);
    return 0;
}