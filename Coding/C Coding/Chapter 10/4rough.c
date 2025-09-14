#include <stdio.h>
#include <string.h>
int main (){
    FILE *ptr;
    ptr = fopen("ok.txt", "a");
    char c[] = "Hi, This is Akeeb";
    int length = strlen(c);
    for(int i = 0; i<length; i++)
    {
        fputc(c[i], ptr);
    }
    return 0;
}