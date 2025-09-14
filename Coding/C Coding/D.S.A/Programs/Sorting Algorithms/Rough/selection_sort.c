#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void prinT(int *a, int size)
{
    for(int i = 0; i< size; i++)
    {
        printf("%d ", a[i]);
    }
}
void seletionSort(int *a, int size)
{
    int min;
    for(int i = 0; i < size-1; i++)
    {
        min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
    }
}
int main (){
    int a[] = {10, 5, 15, 20, 30, 25};
    int size = sizeof(a)/ sizeof(int);
    seletionSort(a, size);
    prinT(a, size);
    return 0;
}