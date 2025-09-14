/*
Write a program to encrypt a string by adding 1 
to the ascii value of its characters.
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
    char encrypt[] = "akxeeb";
    printf("This is your password : %s\n", encrypt);
    int length = strlen(encrypt);
    for(int i = 0; i<length; i++)
    {
        encrypt[i] = encrypt[i] + 1;
    }
    printf("This is your encrypted password : %s", encrypt);
    return 0;
}