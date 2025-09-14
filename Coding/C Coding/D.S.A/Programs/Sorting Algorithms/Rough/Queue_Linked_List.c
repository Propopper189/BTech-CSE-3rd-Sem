#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void enqueue(struct node **f, struct node **r, int val)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));

    if(p == NULL)
    {
        printf("Queue is Full\n");
    }
    p->data = val;
    p->next = NULL;
    if(*f == NULL)
    {
        *f = p;
        *r = p;
    }
    else
    {
        (*r)->next = p;
        (*r) = (*r)->next;
    }
}
int dequeue(struct node **f)
{
    if(*f == NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        struct node *p = *f;
        int val = (*f)->data;
        (*f) = (*f)->next;
        free(p);
        return val;
    }
}
void print(struct node *f)
{
    while(f != NULL)
    {
        printf("%d ", f->data);
        f = f->next;
    }
}
int peek(struct node *f, int pos)
{
    int no = 0;
    for(int i = 1; i != pos; i++)
    {
        f = f->next;
        if(f == NULL)
        {
            no = 1;
        }
    }
    if(no == 0)
    {
        return f->data;
    }
    else
    {
        printf("Invalid Position\n");
        return -1;
    }
}
int main (){
    struct node *f = NULL;
    struct node *r = NULL;
    enqueue(&f, &r, 12);
    // printf("%d ", dequeue(&f));
    enqueue(&f, &r, 13);
    // printf("%d ", dequeue(&f));
    enqueue(&f, &r, 14);
    enqueue(&f, &r, 15);
    printf("%d ", peek(f, 5));
    // print(f);
    return 0;
}