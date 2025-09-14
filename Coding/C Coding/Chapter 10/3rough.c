#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("3rough.txt", "a");
    // you will see that the num is added at
    // the end of the file.
    int num = 45825;
    fprintf(ptr, " %d", num);
    return 0;
}