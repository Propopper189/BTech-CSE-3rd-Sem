// Case - 3
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
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("NULL\n");
    }
}
struct node* deleteLastNode(struct node *head)
{
    // struct node *ptr = head;
    struct node *q = head->next;
    while(q->next != NULL)
    {
        q = q->next;
        head = head->next;
    }
    head->next = q->next;
    free(q);
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
    thrd->next = NULL;
    printf("Before Deletion : ");
    display(head);
    deleteLastNode(head);
    printf("After Deletion : ");
    display(head);
    return 0;
}