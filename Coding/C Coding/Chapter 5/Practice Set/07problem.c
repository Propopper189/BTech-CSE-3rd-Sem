// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

// Program starts here

#include <stdio.h>
    
int main (){
    int n=3;
    // printf("Enter Number : ");
    // scanf("%d", &n);
    for(int i = 0; i<n; i++){
        // This loop runs from 0 to 2.
        // if i = 0 --> print 1 star.
        // if i = 1 --> print 3 star.
        // if i = 2 --> print 5 star.
        // no. of star = (2*i+1)
        for(int j = 0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}