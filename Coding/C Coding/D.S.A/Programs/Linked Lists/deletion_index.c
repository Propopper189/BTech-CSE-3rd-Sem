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
struct node* deletionIndex(struct node *head, int index)
{
    struct node *ptr = head;
    for(int i = 0; i != index-1; i++)
    {
        ptr = ptr->next;
    }
    struct node *q = ptr->next;
    ptr->next = q->next;
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
    head = deletionIndex(head, 1);
    printf("After Deletion : ");
    display(head);
    return 0;
}