#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *top)
{
    if(top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *top)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    if(p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct node **top, int value)
{
    if(isFull(*top))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        struct node *p = (struct node*) malloc(sizeof(struct node));
        p->data = value;
        p->next = *top;
        *top = p;
    }
}
int pop(struct node **top)
{
    if(isEmpty(*top))
    {
        printf("Stack UnderFlow!\n");
    }
    else
    {
        struct node *ptr = (*top); // we took pointer of "top" pointer in func
        (*top) = (*top)->next;
        int value = ptr->data;
        free(ptr);
        return value;
    }
}
int peek(struct node *top, int j)
{
    if(top == NULL)
    {
        printf("Error!\n");
        return -1;
    }
    int i = 1;
    for(i; (i != j) && (top->next != NULL); i++)
        {
            top = top->next;
        }
    
    if(i == j)
    {
        return top->data;
    }
    else
    {
        printf("Invalid Position\n");
    }
}
int stackTop(struct node *top)
{
    return top->data;
}
int stackBottom(struct node *top)
{
    while(top->next != NULL)
    {
        top = top->next;
    }
    return top->data;
}
int main (){
    struct node *top = NULL;
    push(&top, 12);
    push(&top, 13);
    push(&top, 14);
    // pop(&top);
    printf("%d \n", peek(top, 1));
    // printf("%d \n", stackBottom(top));
    // printf("%d \n", stackTop(top));

    return 0;
}