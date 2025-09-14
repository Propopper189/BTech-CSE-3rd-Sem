/*
Quick Quiz: Use the library function to 
calculate the area of a square with side a.
*/

// Program starts here

#include <stdio.h>
#include <math.h>
int main (){
    printf("Please enter the side of the square : ");
    int side;
    scanf("%d", &side);
    float area = pow(side, 2.0); // this means side^2
    printf("The area of the square is : %f", area);
    return 0;
}