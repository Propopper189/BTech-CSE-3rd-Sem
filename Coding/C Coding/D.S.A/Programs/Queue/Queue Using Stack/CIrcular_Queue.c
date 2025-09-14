#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int r, f;
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
    
    if(((q->r + 1) % q->size) == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void circularEnqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        // Circular Incrementation
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
        return -1;
    }
    else
    {
        // Circular Incrementation
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}
int peek(struct queue *q , int i)
{
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        return q->arr[(q->f + i)%q->size];
    }
}
int main (){
    struct queue *q = (struct queue*) malloc(sizeof(struct queue));
    q->f = q->r = 0;
    q->size = 2;
    q->size++;
    q->arr = (int*) malloc(q->size*sizeof(int));
    circularEnqueue(q, 12);
    circularEnqueue(q, 1000);
    dequeue(q);
    circularEnqueue(q, 10);
    printf("Peek : %d ", peek(q, 2));
    return 0;
}