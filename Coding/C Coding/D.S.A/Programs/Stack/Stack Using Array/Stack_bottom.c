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
        printf("Stack overflow! %d cannot be pushed\n", value);
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
        printf("Stack underflow!\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack *ptr, int i)
{
    int arrayIndex = ptr->top - i + 1;
    if(arrayIndex < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        return ptr->arr[arrayIndex];
    }
}
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));
    push(s, 12);   
    push(s, 13);   
    push(s, 14);
    // int c = peek(s, 1);
    // printf("First element from top is %d", c);   
    
    // printf("Stack Top : %d", stackTop(s));
    
    printf("Stack Bottom : %d", stackBottom(s));
    return 0;
}