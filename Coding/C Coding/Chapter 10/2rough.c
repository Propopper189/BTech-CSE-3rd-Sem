#include <stdio.h>
    
int main (){
    FILE *ptr;
    ptr = fopen("junaid.txt", "a");
    fclose(ptr);
    ptr = fopen("junaid.txt", "w");
    int num = 45825;
    fprintf(ptr, "%d ", num);
    num = 45826;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    ptr = fopen("junaid.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("%d ", num);
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    return 0;
}