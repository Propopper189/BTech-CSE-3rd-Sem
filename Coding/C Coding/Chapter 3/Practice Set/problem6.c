/*
Write a program to find greatest of 
four numbers entered by the user.
*/
#include <stdio.h>
int main (){
    int a, b, c, d;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("\nEnter the second number : ");
    scanf("%d", &b);
    printf("\nEnter the third number : ");
    scanf("%d", &c);
    printf("\nEnter the fourth number : ");
    scanf("%d", &d);
    int greatest = a;
    if (b>greatest){
        greatest = b;
    }
    if (c>greatest){
        greatest=c;
    }
    if (d>greatest){
        greatest=d;
    }
    printf("%d is the greatest", greatest);
    return 0;
}