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
struct node* insertAtEnd(struct node* head, int data)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    p->data = data;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = NULL;
    return head;
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
    head = insertAtEnd(head, 46);
    display(head);
    return 0;
}