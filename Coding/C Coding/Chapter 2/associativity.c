#include <stdio.h>
int main (){
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d", a*b/c+7);

    // 3*b/2*c+7*a
    // 3*6/2*9+7*3
    // 18/2*9+21
    // 9*9+21
    // 81+21
    // 102
    printf("\nThe value is : %d", 3*b/2*c+7*a);
    return 0;
}