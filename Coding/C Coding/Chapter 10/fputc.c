#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("aquib.txt", "a");
    fputc('c', ptr);
    // used to write character 'c' to the file
    return 0;
}