#include <stdio.h>
int main(){
    
    char ch = 'a';
    ch = 'c';
    ch = '\n'; //represents a new line.
    printf("Hey, I Am Good \n How Do You Do?"); // "\n" is for next line.
    printf("\nHey \t I Am Hungry");// "\t" is for tab.
    printf("\n\"An Apple A Day, Keeps The Doctor Away\""); // '\"' is for adding "" in between the quotes
    printf("\n\'An Apple A Day, Keeps The Doctor Away\'"); // "\'" is for adding '' in between the quotes
    printf("\nApple\\Fruits"); // double back slash will print single back slash under quote.
    return 0;
}