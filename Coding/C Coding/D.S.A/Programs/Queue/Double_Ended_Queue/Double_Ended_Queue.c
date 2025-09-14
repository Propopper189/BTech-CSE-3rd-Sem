#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if(q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *q)
{
    if(q->r == q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueueF(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->arr[q->f] = val;
        q->f--;
    }
}
void enqueueR(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeueF(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int val = q->arr[q->f];
        q->f++;
        return val;
    }
    return -1;
}
int dequeueR(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int val = q->arr[q->r];
        q->r--;
        return val;
    }
    return -1;
}
void print(struct queue *q)
{
    for(int i = q->f + 1; i <= q->r; i++)
    {
        printf("%d ", q->arr[i]);
    }
}
int main (){
    struct queue *q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 100;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size * sizeof(int));
    enqueueR(q, 12);
    dequeueF(q);
    enqueueR(q, 14);
    enqueueF(q, 13);
    print(q);
    return 0;
}