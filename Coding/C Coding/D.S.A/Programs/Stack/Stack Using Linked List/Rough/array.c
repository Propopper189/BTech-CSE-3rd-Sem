#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *s)
{
    if(s->top == s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s, int value)
{
    if(isFull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }
    s->top++;
    s->arr[s->top] = value;
}
int isEmpty(struct stack *s)
{
    if(s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("Stack UnderFlow\n");
    }
    else
    {
        int value = s->arr[s->top];
        s->top--;
        return value;
    }
}
int peek(struct stack *s, int j)
{
    int indexArray = s->top - j + 1;
    if(indexArray<0)
    {
        printf("Invalid Position!\n");
    }
    else
    {
        return s->arr[indexArray];
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 2;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    push(s, 133);
    push(s, 120);
    // printf("%d \n", isEmpty(s));
    printf("%d \n", peek(s, 1));
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    return 0;
}