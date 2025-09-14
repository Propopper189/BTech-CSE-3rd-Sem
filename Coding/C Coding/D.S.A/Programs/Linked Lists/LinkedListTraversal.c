#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListPrint(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf(" NULL");
}
int main (){
    struct node *head, *second, *third, *fourth;
    
    // Allocate memory to the nodes in linked list in heap.
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));
    
    // link first node with second.
    head->data = 12;
    head->next = second;  

    // link second node with third.
    second->data = 21;
    second->next = third;

    // link third node with fourth.
    third->data = 32;
    third->next = fourth;

    // terminate the link at fourth node.
    fourth->data = 45;
    fourth->next = NULL;

    // Printing Linked List.
    LinkedListPrint(head);

    return 0;
}