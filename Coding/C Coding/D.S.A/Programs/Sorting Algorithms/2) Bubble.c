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
void bubblesort(int *a, int size)
{
    int c = 0;
    int sorted = 0;
    for(int i = 0; i < size -1 ; i++)
    {
        sorted = 1;
        for(int j = 0; j < size-1-i; j++)
        {
            printf("%d ", j);
            c++;
            if(a[j] > a[j + 1] && j>= 0)
            {
                swap(&a[j], &a[j+1]);
                sorted = 0;
            }
        }
        if(sorted == 1)
        {
            return;
        }
    }
}
int main (){
    int a[] = {1, 2, 3, 6, 4, 5, 8, 7};
    int size = sizeof(a)/sizeof(int);
    bubblesort(a, size);
    printf("\n");
    print(a, size);
    return 0;
}