#include <stdio.h>
int arr[3];
int *pos(int *, int);
int *pos(int *a, int b)
{
    int bc = 0;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]>0)
        {
            arr[bc] = a[i];
            bc++;
        }
    }
}
int main()
{
    int a[] = {12, 45, 56, -87, -98};
    pos(a, 5);
    printf("The Array Of Positive Inetgers : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}