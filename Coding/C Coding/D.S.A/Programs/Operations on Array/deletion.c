#include <stdio.h>
void display(int *a, int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int dlt(int *a, int *size, int rmv)
{
    if(rmv>=(*size))
    {
        return 0;
    }
    for(int i = rmv; i < (*size)-1; i++)
    {
        a[i] = a[i + 1];
    }
    (*size)--;
    return 1;
}
int main (){
    int a[100] = {10, 20, 30, 40};
    int size = 4;
    int rmvindex = 1;
    int rmved = a[rmvindex];
    display(a, size);
    int check = dlt(a, &size, rmvindex);
    if(check == 0)
    {
        printf("Deletion Failed..!");
    }
    else
    {
        display(a, size);
        printf("Successfully Deleted %d", rmved);
    }
    return 0;
}