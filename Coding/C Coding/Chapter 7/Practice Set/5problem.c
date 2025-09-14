/*
Write a program containing 
a function which reverses the array passed to it.
*/

// Program starts here.

#include <stdio.h>

int print(int*, int);
int print(int a[], int b){
    for(int i = 0; i<b; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int reverse(int*, int);
int reverse(int a[], int b){
    int temp;
    for(int i = 0; i<b; i++){
        temp = a[i];
        a[i] = a[b-1];
        a[b-1] = temp;
        b--;
    }
}
int main (){
    int a[] = {1, 2, 3, 4, 5};
    printf("Before Reversal : ");
    print(a, 5);
    reverse(a, 5);
    printf("After Reversal : ");
    print(a, 5);
    return 0;
}