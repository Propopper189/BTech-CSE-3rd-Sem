#include <stdio.h>
    
int main (){
    char st[5];
    // Note:
    // 1. The string should be short enough to fit into the array.
    // 2. scanf cannot be used to input multi-word strings with spaces.
    printf("Please Enter Your Name : ");
    scanf("%s", st);
    printf("%s", st);
    return 0;
}