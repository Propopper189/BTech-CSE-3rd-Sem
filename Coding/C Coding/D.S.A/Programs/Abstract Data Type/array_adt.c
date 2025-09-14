#include <stdio.h>
#include <stdlib.h>
typedef struct myarray
{
    int tsize;
    int usize;
    int *ptr;
}arr;
void create(arr *a, int tsize, int usize)
{
    // (*a).ptr = (int*) malloc(tsize*sizeof(int));
    // (*a).tsize = tsize;
    // (*a).usize = usize;
    a->ptr = (int*) malloc(tsize*sizeof(int));
    a->tsize = tsize;
    a->usize = usize;
}
void set(arr *a)
{
    for(int i = 0; i < (a->usize); i++)
    {
        printf("Enter The Value For ptr[%d] : ", i);
        scanf("%d", &(a->ptr)[i]);
    }
}
void display(arr *a)
{
    for(int i = 0; i < (a->usize); i++)
    {
        printf("%d ", (a->ptr)[i]);
    }
}
int main (){
    arr marks, *m;
    m = &marks;
    create(m, 10, 5);
    set(m);
    display(m);
    return 0;
}