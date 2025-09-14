#include <stdio.h>
    
int main (){
    char st[50];
    // gets() is a function which can be used to receive a multi-word string.
    printf("Please Enter Your Sentence : ");
    gets(st); 
    // printf("%s", st);
    // printf("Hello"); // This Won't Print The Next Line.
    printf("You Entered : ");
    puts(st); // Prints the string & places the cursor on the next line 
    // so if i want to print something on the next line, i won't need to use "\n".
    printf("I am printed on the next line without using back slash n");
    return 0;
}