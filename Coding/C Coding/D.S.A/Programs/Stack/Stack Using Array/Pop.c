#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
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
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        int value = ptr->arr[ptr->top--];
        // ptr->top--;
        return value;
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    printf("Before Pushing, Empty : %d & Full : %d\n", isEmpty(s), isFull(s));
    push(s, 12);
    push(s, 13);
    push(s, 14);
    printf("After Pushing, Empty : %d & Full : %d\n", isEmpty(s), isFull(s));
    printf("\nBefore Popping, Empty : %d & Full : %d\n", isEmpty(s), isFull(s));
    pop(s);
    pop(s);
    pop(s);
    printf("After Popping, Empty : %d & Full : %d\n", isEmpty(s), isFull(s));
    return 0;
}