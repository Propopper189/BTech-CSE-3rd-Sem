/*

Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.

*/

//Program starts here

#include <stdio.h>
int main(){
    int radius, height;
    radius = 6;
    height = 10;
    printf("The area of the circle with radius %d is %f unit square\n", radius, 3.14*radius*radius );
    printf("The volume of the cylinder with height %d and radius %d is %f unit cube\n", height, radius, 3.14*radius*radius*height);
    return 0;
}