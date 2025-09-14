/*
Quick Quiz: Write a program with three functions
1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”.
main() should call all of these in order 1→2→3
*/

// Program starts here.

#include <stdio.h>
// Function prototype
void goodMorning();
void goodAfternoon();
void goodNight();
int main (){
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}
// Function defintion
void goodMorning(){
    printf("Good morning\n");
}
void goodAfternoon(){
    printf("Good afternoon\n");
}
void goodNight(){
    printf("Good night\n");
}