/*
Repeat problem 3 for a general input provided by the user using scanf.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    int a[10];
    for(int i = 0; i<10; i++){
        a[i] = n*(i+1);
    }
    for(int i = 0; i<10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}