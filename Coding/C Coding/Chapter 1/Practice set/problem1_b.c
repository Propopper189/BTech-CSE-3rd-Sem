/*Write a C program to calculate area of rectangle
    2. Using Inputs supllied by the user.
*/

//Program Starts Here.

#include <stdio.h>
int main(){
    int length, breadth; //we can declare variables in this way also.
    printf("Enter The Length (in cm) Of The Rectangle : "); //printing instructions for the user.
    scanf("%d", &length); //taking length from the user
    printf("Enter The Breadth (in cm) Of The Rectangle : "); //printing instructions for the user.
    scanf("%d", &breadth); //taking breadth from the user.
    printf("The Area Of The Rectangle Is : %d sqcm", length*breadth); //printing area as an output.

    return 0;
}