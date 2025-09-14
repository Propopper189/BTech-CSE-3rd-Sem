/*
Write a program to decrypt the string encrypted 
using encrypt function in problem 6.
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
    char decrypt[] = "blyffc";
    printf("This Is The Encrypted Password : %s\n",decrypt);
    int length = strlen(decrypt);
    for(int i = 0; i<length; i++)
    {
        decrypt[i] = decrypt[i] - 1;
    }
    printf("This Is The Decrypted Password : %s", decrypt);
    return 0;
}