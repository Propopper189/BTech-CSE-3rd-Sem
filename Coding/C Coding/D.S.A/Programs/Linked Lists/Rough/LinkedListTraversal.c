#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// void linkedList(struct node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->next;
//     }
//     if(ptr == NULL)
//     {
//         printf("NULL");
//     }
// }
int main (){
    struct node *head, *second, *third;
    // allocate memory to the nodes.
    head = (struct node*) malloc(sizeof(struct node));  
    second = (struct node*) malloc(sizeof(struct node));  
    third = (struct node*) malloc(sizeof(struct node));  
    
    // link first node with second.
    head->data = 12;
    head->next = second;

    // link second node with third.
    second->data = 21;
    second->next = third;

    // terminate node at third.
    third->data = 32;
    third->next = NULL;

    // Printing Linked List
    // linkedList(head);
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return 0;
}