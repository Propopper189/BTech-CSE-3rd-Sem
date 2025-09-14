#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    char *arr;
};
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
void push(struct stack *s, char val)
{
    if(isFull(s))
    {
        printf("Stack is Full\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
int pop(struct stack *s)
{
    if(isEmpty(s))
    {
        return 0;
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int match(char *a, struct stack *s)
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '(')
        {
            push(s, '(');
        }
        if(a[i] == ')')
        {
            if(pop(s) == '(')
            {
                continue;
            }
            else
            {
                printf("Invalid Paranthesis\n");
                return -1;
            }
        }
    }
    if(isEmpty(s))
    {
        printf("Valid Paranthesis\n");
        return 1;
    }
    else
    {
        printf("Invalid Paranthesis\n");
        return -1;
    }
}
int main (){
    struct stack *q = (struct stack*) malloc(sizeof(struct stack));
    char *a = "(())";
    q->size = sizeof(a)/sizeof(char);
    q->top = -1;
    q->arr = (char*) malloc(q->size*sizeof(char));
    match(a, q);
    return 0;
}