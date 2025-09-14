#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    printf("Please declare the size of the array : ");
    scanf("%d", &n);
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));
    for(int i = 0; i<n; i++)
    {
        ptr[i] = i/2.0;
        printf("The value at ptr[%d] is %.2f\n", i, ptr[i]);
    }
    return 0;
}