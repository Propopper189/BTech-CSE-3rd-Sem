//Write a function to convert Celsius temperature into Fahrenheit.

//Program starts here

#include <stdio.h>
float fah(int);
float fah(int a){
    return (9.0/5.0*a)+32;
}    
int main (){
    int c;
    printf("Please enter celsius : ");
    scanf("%d", &c);
    printf("%d degree celius is %.2f fahrenheit", c, fah(c));
    return 0;
}