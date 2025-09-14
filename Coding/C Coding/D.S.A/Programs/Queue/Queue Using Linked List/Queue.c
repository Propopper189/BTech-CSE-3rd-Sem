#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *s)
{
    if(s == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *s)
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
void enqueue(struct node **f, struct node **r, int val)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    if(isFull(*f))
    {
        printf("Queue is Full\n");
    }
    p->data = val;
    p->next = NULL;
    if(isEmpty(*f))
    {
        *f = p;
        *r = p;
    }
    else
    {
        (*r)->next = p;
        *r = p;
    }
}
int dequeue(struct node **f)
{
    if(isEmpty(*f))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *p = (*f);
        (*f) = (*f)->next;
        int val = p->data;
        free(p);
        return val;
    }
    return -1;
}
int peek(struct node *f, int j)
{
    if(isEmpty(f))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for(int i = 1; i != j; i++)
        {
            f = f->next;
        }
        return f->data;
    }
}
void print(struct node *f)
{
    if(isEmpty(f))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(f != NULL)
        {
            printf("%d ", f->data);
            f = f->next;
        }
    }
}
int main (){
    struct node *f = NULL;
    struct node *r = NULL;
    enqueue(&f, &r, 12);
    enqueue(&f, &r, 13);
    enqueue(&f, &r, 14);
    // printf("%d ", dequeue(&f));
    // printf("%d ", dequeue(&f));
    print(f);
    return 0;
}