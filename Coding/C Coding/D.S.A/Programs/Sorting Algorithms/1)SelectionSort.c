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
void InsertionSort(int *a, int size)
{
    int min;
    for(int i = 0; i < size-1; i++)
    {
        // Loop for passes.
        min = i;
        for(int j = i + 1; j < size; j++) 
        {
            // Loop for each pass
            // j = i + 1; because no need to check for a[min];
            if(a[j] < a[min])
            {
                // if a[j] is smaller than the ideal min element
                min = j;
            }
        }
        // we are swapping a[i] with a[min] to bring most small
        // element to the first.
        swap(&a[i], &a[min]);
    }
}
int main (){
    int a[] = {8, 6, 1, 2};
    int size = sizeof(a)/sizeof(int);
    InsertionSort(a, size);
    print(a, size);
    return 0;
}