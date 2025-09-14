#include <stdio.h>
// Function Prototype

int sum(int, int);

// Defining Function
int sum(int x, int y){
    printf("The sum is %d.\nPrinting with functions.\n", x+y);
    return x+y; //Returns the value of x+y.
} 
int main (){
    int a = 2;
    int b = 3;
    // int c = a+b;
    // printf("The sum is %d\n", c);
    //Function call -->
    int c = sum(a,b); // now c = a+b because of return function 
    printf("%d is the return value\n",c);

    int a1 = 22;
    int b1 = 25;
    // int c1 = a1+b1;
    // printf("The sum is %d\n", c1);
    // return 0;
    sum(a1,b1); //Function call.
    int c1 = sum(a1,b1);
    // printf("The return value is %d", c1);
    return 0;
}