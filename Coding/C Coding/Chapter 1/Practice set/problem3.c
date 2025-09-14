/*
Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

//Program Starts Here.

#include <stdio.h> //preprocessors
int main(){ //main function starts here 
    int Celsius; //declaring Celsius variable
    printf("Enter Celsius : "); // printing instrutions for the user in order to get input.
    scanf("%d", &Celsius); //taking input from user.
    printf("%d Degree Celsius is equal to %f Degree Fahrenheit", Celsius, 9.0/5.0*Celsius+32); // getting results in fahrenheit.
    return 0; //programs ends.
}