/*
Use the array in problem 1 to store 6 integers 
entered by the user.
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
    
int main (){
    int *a = (int*) calloc(6, sizeof(int));
    for(int i = 0; i<6; i++)
    {
        printf("Enter : ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}