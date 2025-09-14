/*
Write a program to read a text file character by 
character and write its content twice in separate 
file.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    FILE *ptr1, *ptr2;
    ptr1 = fopen("01_3problem.txt", "r");
    ptr2 = fopen("02_3problem.txt", "w");
    char c;
    while(1)
    {
        c = fgetc(ptr1);
        if(c == EOF)
        {
            break;
        }
        fputc(c, ptr2);
        fputc(c, ptr2);
        // fputc(source, target);
        // fprintf(ptr2, "%c", c);
        // fprintf(ptr2, "%c", c);
        //fprintf(target, "format", source)
    }
    return 0;
}