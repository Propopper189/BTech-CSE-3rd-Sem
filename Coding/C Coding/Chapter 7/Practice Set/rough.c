#include <stdio.h>
int arr[3];
int pos(int* , int );  
int pos(int* a, int b)
{
    int ab = 0;
    for(int i = 0; i<b; i++)
    {
        if(a[i]>0)
        {
            arr[ab] = a[i];
            ab++;
        }
    }
}  
void print(int*, int);
void print(int* a, int b)
{
    for(int i = 0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main (){
    int a[] = {12,24,-36,48};
    pos(&a[0], 4);
    print(&a[0], 4);
    return 0;
}