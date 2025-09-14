/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest
*/

//Program Starts Here.

#include <stdio.h>
int main(){
    int p; //declaring p as integer
    float r; //declaring r as float
    int t; //declaring t as integer
    printf("Please Enter Your Principle Amount : "); //printing instructions for the user.
    scanf("%d", &p); //taking input from the user.
    printf("Please Enter The Rate Of Interest : ");//printing instructions for the user.
    scanf("%f", &r); //taking input from the user.
    printf("Please Enter The Time Period : "); //printing instructions frorm the user.
    scanf("%d", &t); //taking input from the user
    printf("The Simple Interest For The Given Data Is : %f Percentage", (p*r*t)/100); // We can calculate in brackets like real life problems.
    return 0; //program ends
}