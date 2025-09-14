#include <stdio.h>
#include <stdlib.h>
void insert_values(float*, int);
void insert_values(float* a, int b)
{
    for(int i = 0; i<b; i++)
    {
        a[i] = i/2.0;
    }
}
void display(float*, int);
void display(float* a, int b)
{
    for(int i = 0 ; i<b; i++)
    {
        printf("The value at a[%d] is %.2f\n", i, a[i]);
    }
}
int main (){
    int n;
    printf("Please declare the size of the array : ");
    scanf("%d", &n);
    float *ptr;
    ptr = (float*) calloc(n, sizeof(float));
    insert_values(ptr, n);
    display(ptr, n);
    return 0;
}