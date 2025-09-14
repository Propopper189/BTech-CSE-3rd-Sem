#include <stdio.h>
main(){
    printf("The size int takes in this system is : %d byte\n", sizeof(int)); //sizeof() function is a function which is used to find the size (in bytes) of int,char,float, etc data types.
    printf("The size char takes in this system is : %d byte\n", sizeof(char));
    printf("The size float takes in this system is : %d byte\n", sizeof(float));
    int sizeOfint = sizeof(int);
    sizeOfint = sizeOfint*8;
    printf("Int takes %d bits\n", sizeOfint);
    int sizeOfchar = sizeof(char);
    sizeOfchar = sizeOfchar*8;
    printf("Char takes %d bits\n", sizeOfchar);
    int sizeOffloat = sizeof(float);
    sizeOffloat = sizeOffloat*8;
    printf("Float takes %d bits\n", sizeOffloat);
    printf("1 byte = 8 bits\n");
    return 0;
}