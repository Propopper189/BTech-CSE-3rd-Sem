/*
Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/

// Program starts here

#include <stdio.h>
int main (){
    
    int year; 
    printf("Please Enter The Year : ");
    scanf("%d", &year);
    if((year%4==0 && year%100!=0)||year%400==0){ 
        //the year should be divisible by 4 and if it divisbile by 4,
        //it should not be divisible by 100,
        //Any Year Divisible by 400 is a leap year.
        printf("The year entered is %d\n", year);
        printf("%d is a leap year\n", year);
    }
    else {
        printf("%d is not a leap \n", year);
    }
    return 0;
}