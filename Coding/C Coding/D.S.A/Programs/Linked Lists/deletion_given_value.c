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
struct node* dltGivenValue(struct node *head, int value)
{
    struct node *ptr = head;
    struct node *q = head->next;
    if(ptr->data == value)
    {
        q = ptr;
        ptr = ptr->next;
        free(q);
        return ptr;
    }
    while(q->data != value && q->next != NULL)
    {
        q = q->next;
        ptr = ptr->next;
    }
    if(q->data == value)
    {
        ptr->next = q->next;
        free(q);
        return head;
    }
    else
    {
        printf("Failed..!! Element Was Not Found\n");
        return 0;
    }
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
    head = dltGivenValue(head, 13);
    if(head != 0)
    {
        printf("After Deletion : ");
        display(head);
    }
    return 0;
}