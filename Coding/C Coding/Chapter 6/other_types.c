#include <stdio.h>
    
int main (){
    char i = 'A';
    char* j = &i; // j is a character pointer pointing to i.
    char** j1 = &j;
    
    float k = 53.456;
    float* k1 = &k; // k1 is a float pointer pointing to k.

    printf("The address of i is %p\n", j);
    printf("The address of j is %p\n", j1);
    printf("The address of k is %p\n", k1);
    return 0;
}