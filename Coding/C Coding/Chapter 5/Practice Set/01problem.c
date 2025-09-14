//Write a program using function to find average of three numbers

//Program starts here.

#include <stdio.h>
int average(int, int, int);
int average(int a, int b, int c){
    return (a+b+c)/3;
}    
int main (){
    int n = 3;
    int y = 4;
    int z = 8;
    printf("The average of %d, %d, and %d is %d", n,y,z,average(n,y,z));
    return 0;
}