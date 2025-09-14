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
int push(struct stack *s, char exp)
{
    if(isFull(s))
    {
        printf("Stack Overflow!\n");
        return -1;
    }
    else
    {
        s->top++;
        s->arr[s->top] = exp;
        return 1;
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
        s->top--;
        return 1;
    }
}
int MatchParanthesis(struct stack *s, char a[])
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '(')
        {
            push(s, '(');
        }
        else if(a[i] == ')')
        {
            if(pop(s))
            {
                continue;
            }
            else
            {
                printf("Unbalanced Expression\n");
                return-1;
            }
        }
    }
    if(isEmpty(s))
    {
        printf("Balanced Expression\n");
        return 1;
    }
    else
    {
        printf("Unbalanced Expression\n");
        return -1;
    }
}
int main (){
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    char expression[] = "10 + (10))";
    s->top = -1;
    s->size = sizeof(expression) - 1;
    s->arr = (char*) malloc(s->size*sizeof(char));
    for(int i = 0; expression[i] != '\0'; i++)
    {
        printf("%c", expression[i]);
    }
    printf(" : ");
    MatchParanthesis(s, expression);
    return 0;
}