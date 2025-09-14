#include <stdio.h>
void display(int *a, int size)
{
    // Code for traversal
    for(int i = 0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
} 
int insert(int* a, int *size, int element, int index, int max)
{
    // Code for insertion.
    if(index>=max)
    {
        return 0;
    }
    for(int i = (*size); i>index; i--)
    {
        a[i] = a[i-1];
    }
    a[index] = element;
    if(index>=(*size))
    {
        (*size) = index + 1;
    }
    else
    {
        (*size)++;
    }
    return 1;
}
int main (){
    int a[100] = {1,2,3,4,5,6};
    int element = 89;
    int size = 6;
    int max = 100;
    int index = 1;
    display(a, size);
    int check = insert(a, &size, element, index, max);
    if(check == 0)
    {
        printf("Insertion Failed..!!");
    }
    else
    {
        display(a, size);
    }
    return 0;
}