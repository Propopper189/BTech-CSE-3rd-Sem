/*
Write your own version 
of strcpy function from <string.h>
*/

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
char* strcpy1(char*, char*, int);
char* strcpy1(char* a, char* b, int c)
{
    for(int i = 0; i<c; i++)
    {
        a[i] = b[i];
    }
    a[c] = '\0';
    return a;
}
int main (){
    char b[] = "Aquib Is A Coder";
    int length = strlen(b);
    char a[length];
    strcpy1(a,b,length);
    printf("%s", a);
    return 0;
}