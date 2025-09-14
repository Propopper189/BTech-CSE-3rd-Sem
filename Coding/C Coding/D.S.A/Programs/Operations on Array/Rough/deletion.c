#include <stdio.h>
#include <stdlib.h>
void dlt(int*, int* , int);
void dlt(int *a, int *size, int rmv)
{
    for(int i = rmv; i < (*size); i++)
    {
        a[rmv] = a[++rmv];
    }

    (*size) -= 1;
}
int main (){
    int size = 4;
    int removeIndex = 1;
    int *a = (int*) malloc(size*sizeof(int));
    for(int i = 0; i<size; i++)
    {
        a[i] = (i+1)*10;
    }
    dlt(a, &size, removeIndex);
    for(int i = 0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}