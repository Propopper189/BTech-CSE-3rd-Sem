#include <stdio.h>
int main (){
    int a = 0; int b = 1;
    printf("The value of a AND b is %d\n", a&&b);

    printf("The value of a OR b is %d\n", a||b);
    
    printf("The value of NOT(a) is %d", !a);
    // It turns zero(0) to one(1), and vice versa.

    if(a && b){
        printf("Both are true, we have checked this with the help of logical operators");
    }
    else{
        printf("\nEither one of them is zero, we have checked this with the help of logical operators.");
    }
    // Is same as writing..
    if(a==1){
        if(b==1){
            printf("\nBoth are true, we have checked this with the help of traditional method of if and else");
        }
    }
    else{
        printf("\nEither 1 of them is 0, we have checked this with the help of traditional method of if and else\n");
    }
    if (a==1){
        if(b==0){
            printf("\nA is 1 and B is 0\n");
        }
    }
    if (a==0){
        if (b==1){
            printf("A is 0 and B is 1\n");
        }
    }
    return 0;
}