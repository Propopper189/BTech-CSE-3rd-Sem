#include <stdio.h>
#include <string.h> // All string functions are declared in this header.
int main (){
    char st[] = "Aquib";
    char st1[20] = " Bhai";
    int length = strlen(st);
    // This function is used to count the number of characters in the 
    // string excluding the null (‘\0’) characters.
    printf("Number of characters in string is %d\n", length);

    char target[50];
    strcpy(target, st); // target now contains "Aquib"
    // This function is used to copy the content of 
    // second string into first string passed to it.
    printf("St string : %s \nTarget String : %s", st, target);

    strcat(st, st1); // "st" now contains st1. (Aquib Bhai)
    printf("\nSt String : %s\n", st);
    // This function is used to concatenate two strings.

    int a = strcmp("deep", "joke"); // negative value of a, first element of
    // first string (d) comes first than first element of second string (j).
    // DJ is negative.
    // check ASCII table.
    printf("%d", a);
    a = strcmp("joke", "deep"); //Positive value of a.
    printf("\n%d", a);

    return 0;
}