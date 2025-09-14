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
struct node* insertAtIndex(struct node *head, int data, int index)
{
    struct node *p;
    p = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    p->data = data;
    for(int i = 0; i != index-1; i++)
    {
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next = p;
    return p;
}
int main (){
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node*) malloc(sizeof(struct  node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));
    fifth = (struct node*) malloc(sizeof(struct node));
    head->data = 12;
    head->next = second;
    second->data = 23;
    second->next = third;
    third->data = 34;
    third->next = fourth;
    fourth->data = 45;
    fourth->next = NULL;
    printf("Before Insertion : \n");
    display(head);
    fifth = insertAtIndex(head, 66, 1);
    printf("After Insertion : \n");
    // free(fifth);
    display(head);
    return 0;
}