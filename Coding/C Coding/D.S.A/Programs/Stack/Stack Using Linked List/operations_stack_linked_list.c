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
// "**top" because we want to manipulate the "top" pointer with the function
{
    if(isFull(*top))
    {
        printf("Stack Overflow!\n");
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
        return 0;
    }
    else
    {
        struct node *ptr = (*top);
        (*top) = (*top)->next;
        int value = ptr->data;
        free(ptr);
        return value;
    }
}
void print(struct node *top)
{
    while(top != NULL)
    {
        printf("%d ", top->data);
        top = top->next;
    }
}
int main (){
    struct node *top = NULL;
    struct node **t = &top;
    push(t, 12);
    push(t, 13);
    push(t, 14);
    int value = 0;
    // value = pop(t);
    printf("Popped element : %d\n", value);
    print(top);
    return 0;
}