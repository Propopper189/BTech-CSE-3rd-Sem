#include <stdio.h>
    
int main (){
    FILE *ptr1, *ptr2;
    ptr1 = fopen("01_3problem.txt", "r");
    ptr2 = fopen("02_3problem.txt", "w");
    char c;
    while(1)
    {
        c = fgetc(ptr1);
        if(c==EOF)
        {
           break; 
        }
        else
        {
            fputc(c, ptr2);
            fputc(c, ptr2);
        }
    }
    return 0;
}