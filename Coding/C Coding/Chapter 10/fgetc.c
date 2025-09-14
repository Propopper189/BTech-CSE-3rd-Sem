#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("aquib.txt", "r");
    char c = fgetc(ptr); //used to read a character from file.
    printf("%c", c);
    return 0;
}