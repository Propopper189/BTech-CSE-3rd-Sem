/*
Write a program to check whether a given 
character is present in a string or not
*/

// Program Starts Here.

#include <stdio.h>
int strlen(char*);
int strlen(char* a)
{
    int count = 0; 
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main (){
    char a[] = "Akeeb is a coder";
    int length = strlen(a);
    char n;
    printf("Enter your character : ");
    scanf("%c", &n);
    int count = 0;
    for(int i = 0; i<length; i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    if(count != 0)
    {
        printf("%c is present in the string %d times", n, count);
    }
    else
    {
        printf("%c is not present in the string", n);
    }
    return 0;
}