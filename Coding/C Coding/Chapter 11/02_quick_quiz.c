/*
: Write a program to create an array of size n using 
calloc where n is an integer entered by the user
*/

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
int* function(int*, int);
int* function(int* a, int b)
{
    for(int i = 0; i<b; i++)
    {
        a[i] = i+1;
    }
    return a;
}
void display(int*, int);
void display(int* a, int b)
{
    for(int i = 0; i<b; i++)
    {
        printf("The value of a[%d] is %d\n", i, a[i]);
    }
}
int main (){
    int n;
    printf("Declare the size of the array : ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    function(ptr, n);
    display(ptr, n);    
    return 0;
}