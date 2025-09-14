#include <stdio.h>
int bnry(int *a, int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid] == element)
        {
            return mid;
        }
        if(a[mid]>element)
        {
            high = mid - 1;
        }
        if(a[mid]<element)
        {
            low = mid + 1;
        }
    }
    return -1;
} 
int main (){
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(int);
    int element = 4;
    int index = bnry(a, size, element);
    if(index == -1)
    {
        printf("%d was not found", element);
    }
    else
    {
        printf("%d was found at index : %d", element, index);
    }
    return 0;
}