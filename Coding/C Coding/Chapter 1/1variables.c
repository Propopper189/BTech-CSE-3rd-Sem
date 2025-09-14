#include <stdio.h>
int main(){
    int a; // Variable Declaration
    int b;
    a = 6; // Variable Initialisation
    printf("%d\n", a); // Printing Variable, "%d" tells the compiler that the variable is an integer.
    printf("The old value of the variable is : %d\n",a); // "%d" is replaced with the integer "a". 
    a = 8; // the value of the variable can be changed.
    printf("The new value is : %d",a);
    return 0;
    
}