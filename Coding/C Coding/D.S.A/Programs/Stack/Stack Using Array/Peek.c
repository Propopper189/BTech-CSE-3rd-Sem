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
        printf("Stack overflow..! Cannot push %d..!\n", value);
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
        printf("Stack underflow\n");
    }
    else
    {
        int value;
        value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack *ptr, int position)
{
    int indexArray = ptr->top - position + 1;
    if(indexArray < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        return ptr->arr[indexArray];
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    push(s, 12);
    push(s, 13);
    push(s, 14);
    push(s, 15);
    push(s, 16);
    push(s, 17);
    // push(s, 18); //--> Stack Overflow since the size is 6
    // pop(s); --> Last In First Out
    for(int j = 1; j<= s->top + 1; j++)
    {
        printf("%d\n", peek(s, j));
    }
    return 0;
}