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
        free(p);
        return 0;
    }
}
void push(struct node **top, int value)
{
    if(isFull(*top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *p = (struct node*) malloc(sizeof(struct node));
        p->data = value;
        p->next = (*top);
        (*top) = p;
    }
}
int pop(struct node **top)
{
   if(isEmpty(*top))
   {
        printf("Stack Underflow!\n");
   }
   else
   {
        int value = (*top)->data;
        struct node *p = (*top);
        (*top) = (*top)->next;
        free(p);
   }
}
int peek(struct node *top, int j)
{
    int i = 1;
    while(i != j && top != NULL)
    {
        top = top->next;
        i++;
    }
    if(i == j && top != NULL)
    {
        return top->data;
    }
    else
    {
        printf("Invalid Position\n");
        return -1;
    }
}
int stackTop(struct node *top)
{
    if(top == NULL)
    {
        printf("Empty Stack\n");
        return -1;
    }
    return top->data;
}
int stackBottom(struct node *top)
{
    if(top == NULL)
    {
        printf("Empty Stack\n");
        return -1;
    }
    while(top->next != NULL)
    {
        top = top->next;
    }
    if(top->next == NULL)
    {
        return top->data;
    }
}
int main (){
    struct node *top = NULL;
    push(&top, 12);
    push(&top, 100);
    // pop(&top);
    // pop(&top);
    
    printf("%d ", stackBottom(top));
    

    return 0;
}