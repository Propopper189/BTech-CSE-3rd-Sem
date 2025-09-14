#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! %d cannot be pushed!\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    printf("Before Pushing, Empty : %d\n", isEmpty(s));
    printf("Before Pushing, Full : %d\n", isFull(s));
    push(s, 13);
    push(s, 14);
    push(s, 15);
    push(s, 16);
    push(s, 17);
    push(s, 18);
    printf("After Pushing, Empty : %d\n", isEmpty(s));
    printf("After Pushing, Full : %d\n", isFull(s));
    push(s, 19);
    return 0;
}