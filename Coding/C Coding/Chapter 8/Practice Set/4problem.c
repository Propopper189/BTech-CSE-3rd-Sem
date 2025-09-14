/*
Write a function slice() to slice a string. 
It should change the original string such
that it is now the sliced string. 
Take ‘m’ and ‘n’ as the start and 
ending position for slice.
*/

// Program Starts Here.

#include <stdio.h>
int strlen(char* a)
{
    int count = 0; 
    for(int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char* slice(char*, int, int);
char* slice(char* a, int m, int n)
{
    char* ptr1 = &a[m];
    char* ptr2 = &a[n];
    a[n] = '\0';
    a = ptr1;
    printf("%s\n", a);
    return &a[m];
}
int main (){
    char a[] = "Aquib Bhai";
    int b = 1;
    int c = 7;
    slice(a, b, c);
    // int length_of_string_a = strlen(a);
    for(int i = b; i<c; i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}