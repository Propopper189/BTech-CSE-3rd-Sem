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
int main (){
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    
    // Check if the stack is empty
    int check = isEmpty(s);
    if(check == 1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
    // Pushing Elements Manually
    s->arr[0] = 1;
    s->top++;
    s->arr[1] = 2;
    s->top++;
    s->arr[2] = 3;
    s->top++;
    s->arr[3] = 4;
    s->top++;
    s->arr[4] = 5;
    s->top++;
    s->arr[5] = 6;
    s->top++;

    printf("After Pushing Elements Manually : \n");

    // Check is stack is empty
    check = isEmpty(s);
    if(check == 1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }

    // Check if stack is full
    check = isFull(s);
    if(check == 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }
    return 0;
}