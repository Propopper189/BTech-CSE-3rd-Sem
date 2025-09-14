#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("jawaid.txt", "w");
    // "w" will erase all the contents of the file.
    int num = 45825;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    ptr = fopen("jawaid.txt", "a");
    // "a" will add the input at the end of the file.
    num = 45826;
    fprintf(ptr, " %d", num);
    fclose(ptr);
    return 0;
}