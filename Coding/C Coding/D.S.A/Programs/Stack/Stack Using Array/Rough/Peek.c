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
        printf("Stack Overflow!\n");
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
        int value;
        value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack *ptr, int i)
{
    int arrayIndex = ptr->top - i + 1;
    if(arrayIndex < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        return ptr->arr[arrayIndex];
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 4;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));    
    push(s, 12);
    push(s, 13);
    push(s, 14);
    push(s, 15);
    // push(s, 16); // Stack overflow!
    // pop(s);
    printf("Printing Stack : \n");
    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("%d -> %d\n", peek(s, i), i);
    }
    
    return 0;
}