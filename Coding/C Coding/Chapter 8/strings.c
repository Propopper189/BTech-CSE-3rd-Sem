#include <stdio.h>
    
int main (){
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // Same as char st[] = {'a', 'b', 'c', '\0'};
    // Null character is defaultly present at the end of string when we use
    // double quotes. 
    for (int i = 0; i<3; i++)
    {
        printf("%c ", st[i]);
    }
    return 0;
}