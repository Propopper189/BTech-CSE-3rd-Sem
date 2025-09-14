#include <stdio.h>
int main (){
    int a = 5;
    int b = 3;
    int c = a+b;
    printf("The value of a is %d and the value of b is %d and their sum is equal to %d", a,b,c);
    //Modulus operator is used to get the operator
    printf("\nThe Remainder when %d is divided by %d is %d", a,b, a%b);

    int z = a+b; //Valid
    //int a+b = z; //Invalid
    printf("\nThe value of z is %d",z);

    //int z = a^b is not a to the power b in c language, although we have the operator "^".


    return 0;
}