#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack is not empty\n");
}
void push(struct stack *ptr)
{
    for(int i = 0; i<ptr->size; i++)
    {
        ptr->arr[i] = (i + 1) *10;
        ptr->top++;
    }
}
void isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        printf("Stack is full\n");
        return;
    }
    printf("Stack is not full'n");
}
void printAll(struct stack *ptr)
{
    for(int i = 0 ; i<ptr->size; i++)
    {
        printf("%d ", ptr->arr[i]);
    }
}
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->arr = (int*) malloc(s->size*sizeof(int));
    s->top = -1;
    isEmpty(s);
    push(s);
    printf("After Pushing : ");
    isFull(s);
    printAll(s);
    return 0;
}