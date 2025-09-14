#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void prntlinkedList(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("NULL");
    }
}
int main (){
    struct node *head, *second, *third;
    
    // Allocating Memory To The Nodes.
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // Link Head Node With Second.
    head->data = 12;
    head->next = second;

    // Link Second Node With Third.
    second->data = 23;
    second->next = third;

    // Terminate List On Third Node.
    third->data = 34;
    third->next = NULL;

    struct node *ptr;
    ptr = head;
    
    prntlinkedList(ptr);
    return 0;
}