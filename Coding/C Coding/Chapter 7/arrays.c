#include <stdio.h>
// Index of an array of size n goes from 0 to n-1.
int main (){
    int marks[90]; // Reserve space to store 90 integers.
    // Even if we don't store any value, array is gonna take it's space
    // eg --> 90 X 4 = 360 bytes in this case.
    marks [0] = 45;
    marks [1] = 95;

    // We can go all the way till marks[89], as it starts from marks[0],
    // and marks array can store 90 elements.
    
    printf("Mark[0] and Mark[1] is %d and %d", marks[0], marks[1]);
    return 0;
}