// Easy approach but less efficient.
#include <stdio.h>
void print(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void insrtsort(int *a, int size)
{
    int j;
    for(int i = 1; i < size; i++)
    {
        j = i;
        while(a[j-1] > a[j] && j>0)
        {
            swap(&a[j], &a[j-1]);
            j--;
        }
    }
}
int main (){
    int a[] = {1, 3, 2, 6, 4};
    int size = sizeof(a)/sizeof(int);
    print(a, size);
    insrtsort(a, size);
    printf("\n");
    print(a, size);
    return 0;
}