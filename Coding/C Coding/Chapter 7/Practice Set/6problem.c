/*
Write a program containing functions which 
counts the number of positive integers in an array.
*/

// Program Starts Here.

#include <stdio.h>
int check(int*, int);
int check(int* c, int b){
    int number_of_positive;
    number_of_positive = 0;
    for(int i = 0; i<b; i++){
        if(c[i]>0){
            number_of_positive++;
        }
    }
    return number_of_positive;
}
int main (){
    int a[] = {12, 56, 75,-64, 83, -54, 83};
    int f = check(a, 7);
    printf("Number of positive integers in array is : %d", f);
    return 0;
}