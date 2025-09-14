/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

// Program starts here 

#include <stdio.h>
int main (){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        int table = 8*i;
        sum = sum + table;
    }
    printf("%d", sum);
    return 0;
}