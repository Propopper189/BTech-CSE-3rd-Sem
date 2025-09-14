/*
Write a program to count the occurrence of a 
given character in a string.
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
    char a[] = "hi, this is akeeb";
    int length = strlen(a);
    char n;
    printf("Enter Your Character : ");
    scanf("%c", &n);
    int count = 0;
    for(int i = 0; i<length; i++)
    {
        if(a[i] == n)
        {
            count++;
        }
    }
    printf("Ocuurrence of %c in String is %d number of times", n, count);

    return 0;
}