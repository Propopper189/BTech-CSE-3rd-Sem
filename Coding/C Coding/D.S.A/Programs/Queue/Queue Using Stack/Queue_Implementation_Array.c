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
    if(q->f == q->r)
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
    if(q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int val)
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
int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int peek(struct queue *q, int i)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    if(i > q->r + 1)
    {
        printf("No Element Present At The Position\n");
        return -1;
    }
    else
    {
        return q->arr[q->f + i];
    }
}
int firstVal(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    else
    {
        return q->arr[q->f + 1];
    }
}
int lastVal(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }   
    else
    {
        return q->arr[q->r];
    }
}
int main (){
    struct queue *q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));
    enqueue(q, 11);
    enqueue(q, 12);
    enqueue(q, 13);
    enqueue(q, 14);
    enqueue(q, 15);

    printf("Dequeued Element : %d\n", dequeue(q));
    printf("First Element : %d\n", firstVal(q));
    printf("Last Element : %d\n", lastVal(q));
    printf("Peek :  %d\n", peek(q, 1));

    return 0;
}