#include <stdio.h>
int main (){
    int a; //declaring a.
    printf("Please Enter a : "); //printing instructions for the user
    scanf("%d", &a); //taking input from the user
    switch(a){ //switch-case is used when we have to make a choice between number of alternatives for a given variable.
        case 1: //if the entered value is 1
        printf("You have entered 1\n"); // will execute this
        break; //breaks the statements and terminates the switch case. 
        case 2: //if the entered value is 2
        printf("You have entered 2\n"); //will execute this
        break;
        case 3:
        printf("You have entered 3\n");
        break;
        case 4:
        printf("You have entered 4\n");
        break;
        case 56: //If the entered value is 56.
        printf("You have entered 56\n"); //will execute this.
        break;
        default:
        printf("Nothing Matched");
        break;
        /*
        suppose if the entered value is 1, it will print all the other cases as well,
        unless a break function comes into work.
        */
    }
    return 0;
}