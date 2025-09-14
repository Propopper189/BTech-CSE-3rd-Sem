#include <stdio.h>
int linearSearch(int *a, int size, int element)
{
    for(int i = 0; i<size; i++)
    {
        if(a[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main (){
    int a[] = {12,23,34,45,56,67,78};
    int size = sizeof(a)/sizeof(int);
    int element = 78;
    int index = linearSearch(a, size, element);
    if(index == -1)
    {
        printf("%d was not found in the array");
    }
    else
    {
        printf("%d was found at index %d", element, index);
    }
    return 0;
}