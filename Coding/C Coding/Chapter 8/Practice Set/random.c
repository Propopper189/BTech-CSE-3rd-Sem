#include <stdio.h>
void reverse(int*, int); 
void reverse(int* a, int b)
{
    int temp;
    for(int i = 0; i<b;i++)
    {
        temp = a[i];
        a[i] = a[b-1];
        a[b-1] = temp;
        b--;
    }
} 
int main (){
    int a[] = {1,2,3,4};
    reverse(a, 4);
    for(int i = 0; i<4; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}