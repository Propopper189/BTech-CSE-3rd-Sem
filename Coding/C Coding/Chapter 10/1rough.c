#include <stdio.h>
    
int main (){
    FILE *ptr1;
    ptr1 = fopen("aquib.txt", "r");
    int num;
    fscanf(ptr1, "%d", &num);
    printf("%d ", num);
    fscanf(ptr1, "%d", &num);
    printf("%d", num);
    fclose(ptr1);
    return 0;
}