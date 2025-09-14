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
    while(ptr->next != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> ", ptr->data);
    printf("NULL\n");
    printf("NULL");
    while(ptr != NULL)
    {
        printf(" <- %d", ptr->data);
        ptr = ptr->prev;
    }
}
int main (){
    struct node *head, *scnd, *thrd;
    head = (struct node*) malloc(sizeof(struct node));
    scnd = (struct node*) malloc(sizeof(struct node));
    thrd = (struct node*) malloc(sizeof(struct node));
    head->data = 12;
    head->next = scnd;
    head->prev = NULL;
    scnd->data = 13;
    scnd->next = thrd;
    scnd->prev = head;
    thrd->data = 14;
    thrd->next = NULL;
    thrd->prev = scnd;
    display(head);
    free(head);
    free(scnd);
    free(thrd);
    return 0;
}