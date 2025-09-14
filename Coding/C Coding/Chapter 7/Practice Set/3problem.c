/*
Write a program to create an array of 10 integers and 
store multiplication table of 5 in it.
*/

// Program starts here.

#include <stdio.h>
    
int main (){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = 5*(i+1);
    }
    int i = 0;
    while(i<10){
        printf("%d ", a[i]);
        i++;
    }
    
    return 0;
}