/*
Modify the program above to check whether the 
file exists or not before opening the file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("aquib1.txt", "r");
    ptr2 = fopen("jawaid.txt", "r");
    if(ptr1 == NULL)
    {
        printf("This file does not exist, SORRY!");
    }
    else
    {
        int num;
        fscanf(ptr1, "%d", &num);
        char string[100];
        fscanf(ptr2, "%s", &string);
        printf("%d ", num);
        fscanf(ptr1, "%d", &num);
        printf("%d \n", num);
        printf("%s", string);
        fclose(ptr1);
        fclose(ptr2);
    }
    return 0;
}