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
        printf("Stack Overflow!\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
char pop(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int isOp(char e)
{
    if(e == '+'|| e == '-' || e == '*'|| e == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char e)
{
    if(e == '*' || e == '/')
    {
        return 3;
    }
    if(e == '+' || e == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

char* intopo(char *infix)
{
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->size = sizeof(infix);
    s->top = -1;
    s->arr = (char*) malloc(s->size*sizeof(char));
    char *post = (char*) malloc(s->size*sizeof(char));
    int i = 0; 
    int j = 0;
    while(infix[i] != '\0')
    {
        if(isOp(infix[i]))
        {
            if(precedence(infix[i])>precedence(s->arr[s->top]))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                post[j] = pop(s);
                j++;
            }
        }
        else
        {
            post[j] = infix[i];
            i++;
            j++;
        }
    }
    while (s->top != -1)
    {
        post[j] = pop(s);
        j++;
    }
    post[j] = '\0';
    return post;
    
}
int main (){
    char *infix = "b*i";
    printf("%s", intopo(infix));
    return 0;
}