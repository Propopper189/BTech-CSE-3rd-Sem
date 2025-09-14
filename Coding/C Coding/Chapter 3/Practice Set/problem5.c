/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/
#include <stdio.h>
int main (){
    char ch;
    printf("Enter your character : ");
    scanf("%c", &ch);
    printf("The entered character is : %d\n", ch); 
    //refer ascii table : https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    if (ch<='z' && ch>='a'){
        printf("The Character is in lower case");
    }
    else if (ch<='Z'&&ch>='A'){
        printf("The character is in upper case");
    }
    else {
        printf("The entered value is not a character");
    }
    return 0;
}