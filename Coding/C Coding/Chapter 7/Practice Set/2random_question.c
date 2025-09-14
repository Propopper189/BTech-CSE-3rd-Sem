#include <stdio.h>
int arr[3];
int bc = 0;
int* neg(int* a, int b)
{
    for(int i = 0; i<5; i++)
    {
        if(a[i]<0)
        {
            arr[bc] = a[i];
            bc++;
        }
    }
}
int main()
{
    int a[5] = {12, -24, -87, 76, -90};
    neg(a, 5);
    printf("The Array Of Negative Inetegrs : ");
    for(int i = 0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }
}