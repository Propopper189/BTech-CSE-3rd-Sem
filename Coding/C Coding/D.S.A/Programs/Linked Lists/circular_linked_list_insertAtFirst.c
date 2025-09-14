#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("repeat\n");
}
struct node* circularInsertFirst(struct node *head, int value)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = value;
    p->next = head;
    struct node *ptr = head;
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    head = p;
    return head;
}
int main (){
    struct node *head, *scnd, *thrd;
    head = (struct node*) malloc(sizeof(struct node));
    scnd = (struct node*) malloc(sizeof(struct node));
    thrd = (struct node*) malloc(sizeof(struct node));
    head->data = 12;
    head->next = scnd;
    scnd->data = 13;
    scnd->next = thrd;
    thrd->data = 14;
    thrd->next = head;
    printf("Before Insertion : ");
    display(head);
    head = circularInsertFirst(head, 100);
    printf("After Insertion : ");
    display(head);
    return 0;
}