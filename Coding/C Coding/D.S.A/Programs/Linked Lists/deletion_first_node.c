#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    if(head == NULL)
    {
        printf("NULL\n");
    }
}
struct node* deleteFirstNode(struct node *head)
{
    struct node *q = head;
    head = head->next;
    free(q);
    return head;
}
int main (){
    struct node *head, *second, *third;
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head->data = 12;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 14;
    third->next = NULL;
    printf("Before Deletion : \n");
    display(head);
    printf("After Deletion : \n");
    head = deleteFirstNode(head);
    display(head);
    return 0;
}