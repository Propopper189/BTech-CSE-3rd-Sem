/*
A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.
Ans = a) At least once.
*/

#include <stdio.h>
int main (){
    do{
        printf("Executed once even the condition is not satisfied");
    } while (1>10);
    return 0;
}