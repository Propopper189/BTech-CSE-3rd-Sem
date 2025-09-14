#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
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
struct node* insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
int main (){
    struct node *head, *second, *third;
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    
    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = NULL;

    display(head);
    head = insertAtFirst(head, 10);
    display(head);
    return 0;
}