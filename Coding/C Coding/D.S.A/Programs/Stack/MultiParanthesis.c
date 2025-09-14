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
        printf("Stack Overflow\n");
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
int multiParanthesis(struct stack *s, char *e)
{
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
                return -1;
            }
        }
    }
    if(isEmpty(s))
    {
        printf("Valid Paranthesis\n");
    }
    else
    {
        printf("Invalid Paranthesis\n");
    }
}
int main (){
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->top = -1;
    char a[] = "10+[{()}]";
    s->size = (sizeof(a)-sizeof(char))/sizeof(char);
    s->arr = (char*) malloc(s->size*sizeof(char));   
    multiParanthesis(s, a);
    // push(s, 'a');
    return 0;
}