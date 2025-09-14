#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void display(struct node *head)
{
    struct node *ptr = head;
    printf("NULL <- ");
    while(ptr->next != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> NULL\n", ptr->data);
    printf("NULL");
    while(ptr != NULL)
    {
        printf(" <- %d", ptr->data);
        ptr = ptr->prev;
    }
    printf(" -> NULL");
}
void insert(struct node *head)
{
    struct node *ptr = head;
    for(int i = 0; ptr != NULL; i++)
    {
        ptr->data = (i + 1) * 10;
        ptr = ptr->next;
    }
}
int main (){
    struct node *head, *scnd, *thrd;
    head = (struct node*) malloc(sizeof(struct node));
    scnd = (struct node*) malloc(sizeof(struct node));
    thrd = (struct node*) malloc(sizeof(struct node));
    head->next = scnd;
    head->prev = NULL;
    scnd->next = thrd;
    scnd->prev = head;
    thrd->prev = scnd;
    thrd->next = NULL;
    insert(head);
    display(head);
    return 0;
}