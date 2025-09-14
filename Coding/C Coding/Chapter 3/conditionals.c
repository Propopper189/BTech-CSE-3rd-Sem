#include <stdio.h>
int main (){
    int age = 15;
    if(age>10){
        printf("Your age is greater than 10");
        printf("\nWe are inside if");
    }
    if(age%5==0){
        printf("\nWe are inside another if");
        printf("\nThe age is divisible by 5");
        // printf("\n%d", age%5==0); //This will throw 1 as age%5 = 0.
    }
    return 0;
}