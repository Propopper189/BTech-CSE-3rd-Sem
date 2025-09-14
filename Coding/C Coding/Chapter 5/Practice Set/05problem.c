// What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);
// The output will be 6 6 4 as the evalutaion order is not defined.
// although 4 5 5 is also corect if evalution is from left to right.

// Let's verify

#include <stdio.h>
    
int main (){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // If same variable is in printf, then the evaluation is
    // from right to left.
    return 0;
}