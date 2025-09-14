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
void enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->arr[++q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    int a  = -1;
    if(isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        a = q->arr[++q->f];
    }
    return a;
}
int firstElmn(struct queue *q)
{
    return q->arr[q->f + 1];
}
int peek(struct queue *q, int i)
{
    return q->arr[q->f + i];
}
int lastElmn(struct queue *q)
{
    return q->arr[q->r];
}
int main (){
    struct queue *q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 3;
    q->arr = (int*) malloc(q->size*sizeof(int));
    q->f = q->r = -1;
    enqueue(q, 12);
    enqueue(q, 13);
    enqueue(q, 14);
    // printf("%d ", dequeue(q));
    // printf("%d ", dequeue(q));
    // printf("%d ", dequeue(q));
    printf("Printng first element : %d\n", firstElmn(q));   
    printf("Peek : %d\n", peek(q, 2));   
    printf("Printing Last Element : %d\n", lastElmn(q));   
    
    return 0;
}