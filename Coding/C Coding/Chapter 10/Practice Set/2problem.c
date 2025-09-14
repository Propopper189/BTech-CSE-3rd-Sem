/*
Write a program to generate multiplication 
table of a given number in text format. 
Make sure that the file is readable and well 
formatted.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    FILE *ptr;
    int num = 10;
    ptr = fopen("2problem.txt", "w");
    for(int i = 0; i<10; i++)
    {
        if(i==9)
        {
            fprintf(ptr, "%d", num*(i+1));
            break;
        }
        fprintf(ptr, "%d\n", num*(i+1));
    }
    return 0;
}