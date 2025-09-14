#include <stdio.h>
int change(int); //prototype
int change(int a){ //definition
    a = 77;
    return 0;
}
int main (){
    int b = 22;
    change(b); //The value of b remains 22
    printf("b is %d", b); // Prints 22
    return 0;
}
// int sum(int, int);
// int sum(int x, int y){
//     return x + y;
// }

// #include <stdio.h>
// int main (){
//     int c = sum(1,2);
//     printf("%d\n", c);
//     return 0;
// }