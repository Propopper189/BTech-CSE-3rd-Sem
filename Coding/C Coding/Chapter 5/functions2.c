//Function prototype
int divide(int, int);
#include <stdio.h>
int main (){
    int a = 4;
    int b = 2;
    int c = divide(a,b);
    printf("Printing value of C : %d\n", c);
    return 0;
}
//Function defintion
int divide(int x, int y){ // int type  
    printf("The value is %d\n", x/y); 
    return x / y; //int type (data type should match with the defintion.)
}

// The function can be defined either before the main function
// or after the main function ends as far as the prototype
// is written.