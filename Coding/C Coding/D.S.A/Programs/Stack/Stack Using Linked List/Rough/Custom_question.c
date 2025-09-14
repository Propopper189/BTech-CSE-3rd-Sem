#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    int size;
    int num;
};
struct stack s;
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
    if(p == NULL || s.num == s.size)
    {
        free(p);
        return 1;
    }
    else
    {
        free(p);
        return 0;
    }
}
struct node* push(struct node *top, int value)
{
    if(isFull(top))
    {
        printf("Stack Overflow!\n");
        return top;
    }
    else
    {
        struct node *p = (struct node*) malloc(sizeof(struct node));
        p->data = value;
        p->next = top;
        s.num++;
        return p;
    }
}
struct node* pop(struct node *top)
{
    if(isEmpty(top))
    {
        printf("Stack underflow\n");
        return top;
    }
    else
    {
        struct node *ptr = top;
        top = top->next;
        s.num--;
        free(ptr);
    }
    return top;
}
int peek(struct node *top, int j)
{
    struct node *ptr = top;
    for(int i = 1; i != j; i++)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}
int main (){
    struct node *top = NULL;
    s.num = 0;
    s.size = 4;
    top = push(top, 12);
    top = push(top, 13);
    top = push(top, 14);
    top = push(top, 15);
    // top = push(top, 12);
    for(int i = 1; i<= s.num; i++)
    {
        printf("%d -> %d\n", peek(top, i), i);
    }
    return 0;
}