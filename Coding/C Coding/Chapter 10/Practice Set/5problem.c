/*
Write a program to modify a file containing an integer to double its value.
*/

#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("5problem.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    ptr = fopen("5problem.txt", "w");
    fprintf(ptr, "%d", num*2);
    fclose(ptr);
    return 0;
}