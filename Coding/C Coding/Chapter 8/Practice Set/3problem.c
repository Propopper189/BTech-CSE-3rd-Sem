/*
Write your own version of strlen function from <string.h>
*/

// Program Starts Here.

#include <stdio.h>
int strlen(char*);
int strlen(char* a)
{
    int count = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}  
int main (){
    char a[] = "Saudi Arabia";
    int count = strlen(a);
    printf("Number of characters in staring is : %d", count);
    return 0;
}