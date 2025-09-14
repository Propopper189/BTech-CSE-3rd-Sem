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
    while(ptr->next != head)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> repeat", ptr->data);
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
    display(head);
    return 0;
}