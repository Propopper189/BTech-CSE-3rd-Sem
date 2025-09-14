#include <stdio.h>
    
int main (){
    int i = 6;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **(&j));
    // (*&j = j) and (j = &i) so (*j = i)
    printf("The value of i is %d\n", **k);
    // ***&&&a = a ("*" and "&" cut each other)
    return 0;
}