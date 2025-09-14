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
        return 0;
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int MultiParan(char *e)
{
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->size = sizeof(e);
    s->top = -1;
    s->arr = (char*) malloc(s->size*sizeof(char));
    for(int i = 0; e[i] != '\0'; i++)
    {
        if(e[i] == '(')
        {
            push(s, '(');
        }
        else if(e[i] == ')')
        {
            if(pop(s) == '(')
            {
                continue;
            }
            else
            {
                printf("Invalid Paranthesis\n");
                free(s);
                return -1;
            }
        }
        if(e[i] == '[')
        {
            push(s, '[');
        }
        else if(e[i] == ']')
        {
            if(pop(s) == '[')
            {
                continue;
            }
            else
            {
                printf("Invalid Paranthesis\n");
                free(s);
                return -1;
            }
        }
        if(e[i] == '{')
        {
            push(s, '{');
        }
        else if(e[i] == '}')
        {
            if(pop(s) == '{')
            {
                continue;
            }
            else
            {
                printf("Invalid Paranthesis\n");
                free(s);
                return -1;
            }
        }
    }
    if(isEmpty(s))
    {
        printf("Valid Paranthesis");
        free(s);
        return 1;
    }
    else
    {
        printf("Invalid Paranthesis\n");
        
        return -1;
    }
}
int main (){
    char *check = "[{()}]";
    MultiParan(check);
    return 0;
}